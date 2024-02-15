#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int n,x;
cin>>n>>x;
vector<ll int> coins(n);
for(int i=0;i<n;i++){
    cin>>coins[i];
}
ll int y=1e9+7;
vector<ll int> solve(x+1);
solve[0]=1;
    for(auto c: coins){
for(int i=c;i<=x;i++){
    solve[i]+=solve[i-c];
    solve[i]%=y;
    }
}
cout<<solve[x]<<endl;
return 0;
}