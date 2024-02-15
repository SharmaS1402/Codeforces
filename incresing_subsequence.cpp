#include <bits/stdc++.h>
using namespace std;
int best_candidate(map<int,int> &m,int y){
   auto itr=m.lower_bound(y);
   if(itr==m.begin()) return 0;
   itr--;
   return itr->second;

}
void insert(map<int,int> &m,int v,int adv){
    if(m[v]>=adv) return;
    m[v]=adv;
    auto itr=m.find(v);
    itr++;
    while(itr!=m.end() && itr->second<=adv){
        auto temp=itr;
        itr++;
        m.erase(temp);
    }
}
int main(){
int n;
cin>>n;
map<int,int> candidates;
vector<int> arr(n+1);
for(int i=1;i<=n;i++){
    cin>>arr[i];
}
vector<int> dp(n+1);
dp[1]=1;
candidates[arr[1]]=dp[1];
for(int i=2;i<=n;i++){
    dp[i]=1+best_candidate(candidates,arr[i]);
    insert(candidates,arr[i],dp[i]);
}
cout<<*max_element(dp.begin(),dp.end())<<endl;
return 0;
}