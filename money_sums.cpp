#include <bits/stdc++.h>
using namespace std;
int n;
const int max_sum=1e5;
const int max_n=100;
bool dp[max_n+1][max_sum + 1];
int main(){
cin>>n;
vector<int> coins(n+1);
vector<int> solve;
for(int i=1;i<=n;i++){
    cin>>coins[i];
}
dp[0][0]=true;
for(int i=1;i<=n;i++){
    for(int current_sum=0;current_sum<=max_sum;current_sum++){
        dp[i][current_sum]=dp[i-1][current_sum];
        int prev_sum=current_sum - coins[i];
        if(prev_sum >=0 && dp[i-1][prev_sum]){
            dp[i][current_sum]=true;
        }
    }
}
for(int j=1;j<=max_sum;j++){
    if(dp[n][j]) {
        solve.push_back(j);
    }
}
cout<<solve.size()<<endl;
for(auto ele : solve){
    cout<<ele<<" ";
}cout<<endl;
return 0;
}