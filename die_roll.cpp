#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int y,w;
    vector <int> v;
    cin>>y;
    v.push_back(y);
    cin>>w;
    v.push_back(w);
    int n=*max_element(v.begin(),v.end());
    int sum=0;
    for(int i=n;i<=6;i++){
        sum++;
    }
    if(sum==1){
        cout<<"1/6"<<endl;
    }
    if(sum==5){
        cout<<"5/6"<<endl;
    }
    if(sum==2){
        cout<<"1/3"<<endl;
    }
    if(sum==3){
        cout<<"1/2"<<endl;
    }
    if(sum==4){
        cout<<"2/3"<<endl;
    }
    if(sum==6){
        cout<<"1/1"<<endl;
    }
    if(sum==0){
        cout<<"0/1"<<endl;
    }
    

return 0;
}