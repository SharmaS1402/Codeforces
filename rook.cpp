#include <bits/stdc++.h>
using namespace std;
char r,c;
int main(){
int t;
cin>>t;
while(t--){
char ch='a';
string s;
cin>>s;
c=s[0];r=s[1];
int k=r-'0';
for(int i=1;i<=8;i++){
    if(i!=k){
    cout<<c;
     cout<<i<<endl;
    }
}
while(ch<=104){
    if(ch!=c) {
    cout<<ch;
    cout<<r<<endl;
    }
    ch++;
}
}
return 0;
}