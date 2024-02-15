#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n,t;
ll int y=1e9+7;
 ll int dp[1000006][3];
 void solve(){
    dp[1][1]=1;
    dp[1][2]=1;
    for(int i=2;i<=1000003;i++){
        dp[i][1]=((dp[i-1][1]*4)%y + dp[i-1][2])%y;
        dp[i][2]=(dp[i-1][1] + (dp[i-1][2]*2)%y)%y;
    }
 }
int main(){
ios_base::sync_with_stdio(false);  
cin.tie(NULL);
solve();
cin>>t;
while(t--){
    cin>>n;
    ll int ans=(dp[n][1] + dp[n][2])%y;
    cout<<ans<<endl;
}
return 0;
}