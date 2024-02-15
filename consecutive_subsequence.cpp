#include <bits/stdc++.h>
using namespace std; 
int main(){
int n;
cin>>n;
vector<int> arr(n+1);
for(int i=1;i<=n;i++){ cin>>arr[i];}
map<int,int> dp;
int ans=0;int lst=0;
for(int i=1;i<=n;i++){
    int x=arr[i];
    dp[x]=dp[x-1]+1;
    if(ans<dp[x]){
        ans=dp[x];
        lst=x;
    }
}
vector<int> res;
for(int i=n;i>=1;i--){
    if(arr[i]==lst){ 
        res.push_back(i);
    lst--;
    }
}
sort(res.begin(),res.end());
cout<<ans<<endl;
for(auto ele : res){
    cout<<ele<<" ";
}cout<<endl;
return 0;
}