#include <bits/stdc++.h>
using namespace std;
int main(){
int n,m,p;
cin>>n>>m;
vector<int> price(n+1);
vector<pair<int,int>> pages;
for(int i=1;i<=n;i++){
    cin>>price[i];
}
for(int i=1;i<=n;i++){
    cin>>p;
    pages.push_back(make_pair(price[i],p));
}
if(n==1 && m>=price[1]) cout<<pages[0].second;
else if(n==1 && m<price[1]) cout<<0<<endl;
else{
vector<int> solve(m+1);
solve[0]=0;
    for(int i=0;i<n;i++){
        int f=pages[i].first;
        int s=pages[i].second;
for(int x=m;x>=f;x--){
    solve[x]=max(solve[x],solve[x-f]+s);
}
}
cout<<solve[m]<<endl;
}
return 0;
}