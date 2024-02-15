#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct project{
    int sd;
    int ed;
    ll int reward;
} ;
bool cmp(project &p1,project &p2){
    return p1.ed < p2.ed;
}
int bestop(vector<int> &x,int value){
    auto it=lower_bound(x.begin(),x.end(),value);
    if(it==x.begin()+1) return 0;
    it--;
    return distance(x.begin(),it);
    
}
ll int solve(vector<project> &p,vector<int> &x,int n){
    ll int dp[n+1];
    dp[0]=0;
    for(int i=1;i<=n;i++){
        ll int op1=dp[i-1];
        ll int op2=p[i].reward;
        int j=bestop(x,p[i].sd);
        op2+=dp[j];
        dp[i]=max(op1,op2);
    }
    return dp[n];
}
int main(){
int n;
cin>>n;
vector<project> p(n+1);
vector<int> y(n+1);
for(int i=1;i<=n;i++){
    cin>>p[i].sd>>p[i].ed>>p[i].reward;
}
sort(p.begin(),p.end(),cmp);
for(int i=1;i<=n;i++){
    y[i]=p[i].ed;
}
cout<<solve(p,y,n)<<endl;

return 0;
}