#include <bits/stdc++.h>
using namespace std;
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n);
        dp[n-1]=0;
        for(int i=n-2;i>=0;i--){
            dp[i]=1e9;
            for(int j=1;j<=nums[i];j++){
                dp[i]=min(dp[i],dp[i+j]);
            }
            dp[i]=dp[i]+1;
        }
        return dp[0];
    }
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<jump(arr)<<endl;
return 0;
}