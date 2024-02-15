#include <bits/stdc++.h>
using namespace std;
int n,t,hard;
const int INF=1e9+7;
vector<int> arr(200005);
void solve(int n){
vector<array<int,2>> dp(n+1,{INF,INF});
    dp[0][1]=0;
    for(int i=0;i<n;i++){
        for(int who=0;who<2;who++){
            for(int fight=1;fight<=min(2,n-i);fight++){
                if(fight<=1) hard=arr[i];
                else hard=arr[i]+arr[i+1];
                dp[i+fight][!who]=min(dp[i+fight][!who] , dp[i][who] + (who)*hard);
            }
        }
    }
    cout<<min(dp[n][0],dp[n][1])<<endl;
}
int main(){
cin>>t;
while(t--){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    solve(n);
    
}
return 0;
}