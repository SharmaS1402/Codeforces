#include <bits/stdc++.h>
using namespace std;
int main(){
int m,n,ele;
int best=0;int maxi=0;
cin>>m>>n;
vector<vector<int>> dp(m+1,vector<int>(n+1,-1));

for(int i=1;i<m;i++) dp[i][n]=1;
for(int j=1;j<n;j++) dp[m][j]=1;

for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
        cin>>ele;
        if(ele==1){
            dp[i][j]=0;
            if(j==n)  {best=max(best,i);}
            if(i==m)  {maxi=max(maxi,j);}
        }
    }
}
for(int i=1;i<=best;i++) dp[i][n]=0;
for(int j=1;j<=maxi;j++) dp[m][j]=0;

for(int i=m-1;i>0;i--){
    for(int j=n-1;j>0;j--){
        if(dp[i][j]!=0){
        dp[i][j]=dp[i+1][j] + dp[i][j+1];
        }
    }
}
cout<<dp[1][1]<<endl;
return 0;
}