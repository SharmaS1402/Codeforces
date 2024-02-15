#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int k;
cin>>k;
ll int dp[k+1];
dp[1]=19;
for(int x=2;x<=k;x++){
    if((x%10)==0 ){ dp[x]=dp[x-1]+18;}
    else if(dp[x-1]%10==0) {dp[x]=dp[x-1]+27;}
    else {dp[x]=dp[x-1]+9;}
}
// cout<<dp[k]<<endl;
for(int i=68;i<=k;i++){
    cout<<dp[i]<<" ";
}
return 0;
}