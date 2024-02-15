#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int max_n=20;
ll int y=1e9+7;
ll int dp[1<<max_n][max_n];
vector<int> flight[max_n];
int main(){
int n,m;
cin>>n>>m;
for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        a--;b--;
        flight[b].push_back(a);
}
dp[1][0]=1;
for(int s=2;s<(1<<n);s++){
    if((s&(1<<0))==0) continue;
    if((s&(1<<(n-1))) && (s!=((1<<n)-1))) continue;
    for(int x=0;x<n;x++){
        if(s&(1<<x)){
            int prev=s-(1<<x);
            for(int j: flight[x]){
                if((s&(1<<j))){
                dp[s][x]+=dp[prev][j];
                dp[s][x]%=y;
               }
            }
        }
    }
}
cout<<dp[(1<<n)-1][n-1]<<endl;
return 0;
}