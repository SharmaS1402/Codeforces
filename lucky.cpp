#include<iostream>
using namespace std;
#include<string.h>
int main(){
    int t;
    cout<<"enter the value of t "<<endl;
    cin>>t;
    for(int i=0;i<t;i++){
    char s[6];
    gets(s);
    if((s[0]+s[1]+s[2])==(s[3]+s[4]+s[5])){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }



    

return 0;
}