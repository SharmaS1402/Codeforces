#include <bits/stdc++.h>
using namespace std;
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> dp(target+1,0);
        dp[0]=1;
        for(int i=1;i<=target;i++){
            for(auto c : nums){
                if(i-c >=0){
                dp[i]+=dp[i-c];
                }
            }
        }
        return dp[target];
    }

int main(){
vector<int> nums={9};
int target=3;
cout<<combinationSum4(nums,target)<<endl;
return 0;
}