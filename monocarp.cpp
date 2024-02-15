#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    bool ans=true;
    string s;
    int n=s.length();
    cin>>s;
    int ele=0;int minus=0;int plus=0;
    for(int i=0;i<n;i++){
        if(s[i]=='-'){
            if(ele==0){
                ans=false;
                break;
            }
            ele--;
        }
        else if(s[i]=='0'){
            if()
        }
    }
}
return 0;
}