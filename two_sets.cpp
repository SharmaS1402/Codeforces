#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
float n;
cin>>n;
ll int y=1e9+7;
float k=((n*(n+1))/4);
if(k-int(k) !=0){
     cout<<0<<endl;
     return 0;
}
n=int(n);
k=int(k);
vector<vector<int>> dp(n+1,vector<int>(k+1,0));
dp[0][0]=1;
for(int i=1;i<=n;i++){
    for(int j=1;j<=k;j++){
      dp[i][j]=dp[i-1][j];
      if(j-i>=0){
        dp[i][j]+=dp[i-1][j-i];
        dp[i][j]%=y;
      }
    }
}
cout<<dp[n][k]<<endl;
return 0;
}