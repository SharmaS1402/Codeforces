#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
int ans=0;
cin>>n;
vector<pair<int,int>> v(n);
for(int i=0;i<n;i++){
    cin>>v[i].second>>v[i].first;
}
sort(v.begin(),v.end());
int curr_end=-1;
for(int i=0;i<n;i++){
    if(v[i].second >= curr_end){
        ans++;
        curr_end=v[i].first;
    }
}
cout<<ans<<endl;
return 0;
}