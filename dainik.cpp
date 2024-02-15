#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char a[1000];
    gets(a);
    int d=0;
    int an=0;
    for(int i=0;i<n;i++){
        if(a[i]==68){
            d++;
        }
        if(a[i]==65){
            an++;
        }
    }
    if(d>an){
        cout<<"Danik"<<endl;
    }
    if(an>d){
        cout<<"Anton"<<endl;
    }
    if(an==d){
        cout<<"Friendship"<<endl;
    }

return 0;
}