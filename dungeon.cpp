#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll int t,a,b,c,sum,x;
int main(){
cin>>t;
while(t--){
cin>>a>>b>>c;
sum=a+b+c;
x=(a+b+c)/9;
if(sum%9==0 && a>=x && b>=x && c>=x) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
return 0;
}