#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> generate(int numRows) {
        vector<vector<int>> dp(numRows);
        for(int i=0;i<numRows;i++){
            dp[i].push_back(1);
        }
        dp[1].push_back(1);
        for(int i=2;i<numRows;i++){
            for(int j=1;j<i;j++){
                dp[i].push_back(dp[i-1][j-1]+dp[i-1][j]);
            }
            dp[i].push_back(1);
        }
        return dp;
    }
int main(){
    int n;
    cin>>n;
    vector<vector<int>>  x = generate(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<x[i][j]<<" ";
        }cout<<endl;
    }
return 0;
}