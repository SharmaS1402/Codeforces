#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Create the game"<<endl;
int n;
cout<<"Enter the number of players"<<endl;
cin>>n;
// vector<int> curr_pos(n);
vector<int> snakes(100);
vector<int> ladder(100);
int x,y; // no of snakes and ladders
cout<<"Enter the number of snakes"<<endl;
cin>>x;
cout<<"Enter the number of ladders"<<endl;
cin>>y;
cout<<"Enter the positions of snakes and the number where it takes the player"<<endl;
int ss,ll; //variable to get positions of snakes and ladders
int ps,pl; //position where the snake or ladder takes you
for(int i=0;i<x;i++){
    cin>>ss>>ps;
    snakes[ss]=ps;
}
cout<<"Enter the positions of ladders and the number where it takes the player"<<endl;
for(int i=0;i<y;i++){
    cin>>ll>>pl;
    snakes[ll]=pl;
}
int dice=0;
bool game=true;
int a; //throwing the dice
vector<int> v(n);
for(int q=0;q<10;q++){   // maximum 10 round of turns possible
for(int i=0;i<n;i++){
    cout<<"Player "<<i+1<<" Roll the dice"<<endl;
    cin>>a;
    dice=1+(rand()%6);
    cout<<"You get "<<dice<<endl;
    v[i]+=dice;
    if(v[i]==10){
        cout<<"Player "<<i+1<<" is the winner"<<endl<<"Game Over"<<endl;
        game=false;
        break;
    }
    else if(v[i]>10){
        v[i]-=dice;
        cout<<"Try again int the next turn value exceeds the end point"<<endl;
    }
    else {
       
            if(snakes[v[i]]!=0){
                v[i]=snakes[v[i]];
                cout<<"Snakes in the way"<<endl;
            }
            else if(ladder[v[i]]!=0){
                v[i]=ladder[v[i]];
                cout<<"Ladders to rescue"<<endl;
            }

    }
    cout<<"current position: " <<v[i]<<endl;
}   
    if(game==false){
        break;
    }
}
return 0;
}