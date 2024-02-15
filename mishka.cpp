#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m=0;
    int c=0;
    int mi,ch;
    while(n--){
        cin>>mi>>ch;
        if(mi>ch){
            m++;
        }
        if(ch>mi){
            c++;
        }

    }
    if(m>c){
        cout<<"Mishka"<<endl;
    }
    if(c>m){
        cout<<"Chris"<<endl;
    }
    if(m==c){
        cout<<"Friendship is magic!^^"<<endl;
    }

return 0;
}