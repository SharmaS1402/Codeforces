#include <bits/stdc++.h>
using namespace std;
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        bool dp[n+1];
        dp[n]=true;
        int last_true=n;
        for(int i=n-1;i>0;i--){
            if(nums[i-1]>=(last_true-i)){
                dp[i]=true;
                last_true=i;
            }
            else{
                dp[i]=false;
            }
        }
    return dp[1];
    }
int main(){
int n;
cin>>n;
vector<int> arr(n+1);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<canJump(arr)<<endl;
return 0;
}