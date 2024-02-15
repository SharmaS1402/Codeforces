#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n,m;
ll int y=1e9+7;
ll int solve(int n,int m,vector<int> &v){
    ll int ans=0;
    ll int dp[n+2][m+2];
    memset(dp,0,sizeof dp);
    for(int i=1;i<=n;i++){
        for(int x=1;x<=m;x++){
            if(i==1){
                if(v[i]==0 || v[i]==x){
                    dp[i][x]=1;
                }
                else{
                    dp[i][x]=0;
                }
            }
            else{
                if(v[i]==0 || v[i]==x){
                    dp[i][x]=(dp[i-1][x-1] + dp[i-1][x]%y + dp[i-1][x+1])%y;
                }
                else{
                    dp[i][x]=0;
                }
            }
        }
    }
    for(int x=1;x<=m;x++){
        ans=(ans + dp[n][x])%y;
    }
    return ans;
}
int main(){
cin>>n>>m;
vector<int> v(n+1);
for(int i=1;i<=n;i++){
    cin>>v[i];
}
cout<<solve(n,m,v);
return 0;
}