#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    if(a!=1){
        cout<<1<<endl;
    }
    else{
        if(b==2){
            cout<<3<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
}
return 0;
}