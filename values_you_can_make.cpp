#include <bits/stdc++.h>
using namespace std;
const int max_n=500;
const int max_sum=500;
vector<int> coins;
bool dp[max_n+1][max_sum+1];
void ans(int n,vector<int> &coins){
    dp[0][0]=true;
    for(int i=1;i<=n;i++){
        for(int curr_sum=0;curr_sum<=max_sum;curr_sum++){
            dp[i][curr_sum]=dp[i-1][curr_sum];
            int prev_sum=curr_sum-coins[i-1];
            if(prev_sum>=0 && dp[i-1][prev_sum]){
                dp[i][curr_sum]=true;
            }
        }
    }
}
int max_coins(int n,int k,vector<int> &arr){
    int first[k+1];
   vector<vector<int>> dp(n+1,vector<int>(k+1,INT_MIN));
for(int i=0;i<=n;i++){
    dp[i][0]=0;
}
for(int i=1;i<=n;i++){
    for(int j=1;j<=k;j++){
       if(j-arr[i] >=0 && dp[i-1][j-arr[i]]!=INT_MIN) 
       {
        dp[i][j]=max(dp[i-1][j],dp[i-1][j-arr[i]]+1);
        if(dp[i-1][j]<dp[i-1][j-arr[i]]+1){
            first[j]=arr[i];
        }
       }
       else {dp[i][j]=dp[i-1][j];}
    }
}
    int y=k;
    while(k>0){
        coins.push_back(first[k]);
        k-=first[k];
    }
    return dp[n][y];
}


int main(){
int n,k;
cin>>n>>k;
vector<int> om;
vector<int> arr(n+1);
for(int i=1;i<=n;i++){
    cin>>arr[i];
}
sort(arr.begin()+1,arr.end());
int Size=max_coins(n,k,arr);
ans(Size,coins);
coins.clear();
for(auto c : coins){
   Size= max_coins(n,k-c,arr);
   coins.push_back(c);
    ans(Size,coins);
    coins.clear();
}
// for(auto ele: coins){
//     cout<<ele<<" ";
// }cout<<endl;
for(int j=0;j<=max_sum;j++){
    if(dp[Size][j]){
        om.push_back(j);
    }
}
cout<<om.size()<<endl;
for(auto ele: om){
    cout<<ele<<" ";
}cout<<endl;

return 0;
}