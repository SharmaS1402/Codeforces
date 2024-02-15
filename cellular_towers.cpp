#include <bits/stdc++.h>
using namespace std;
vector<int> v(200005);
int main(){
int n,m,ele;
int ans=0;
set<int> s;
cin>>n>>m;
for(int i=0;i<n;i++){
    cin>>v[i];
}
for(int i=0;i<m;i++){
    cin>>ele;
    s.insert(ele);
}
for(int i=0;i<n;i++){
    int dist=2e9;
    auto itr=s.lower_bound(v[i]);
    if(itr!=s.end()){
    dist=min(dist,*itr - v[i]);
    }
    
    if(itr!=s.begin()){
    itr--;
    dist=min(dist,v[i]-*itr);
    }
    ans=max(ans,dist);
}
cout<<ans<<endl;
return 0;
}