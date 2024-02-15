#include <bits/stdc++.h>
using namespace std;
vector<int> arr(100005);
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>arr[i];
    vector<int> dp(n+1);
    dp[1]=arr[1];
    int k=1;
    for(int i=2;i<=n;i++){
        dp[i]=max(dp[i-1]+k*arr[i] , dp[i-1]+(k+1)*arr[i]);
        if((dp[i-1]+k*arr[i]) < (dp[i-1]+(k+1)*arr[i])){
            k++;
        }
    }
    cout<<dp[n]<<endl;
}
return 0;
}