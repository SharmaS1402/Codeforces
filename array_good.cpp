#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int t;
cin>>t;
while(t--){
    ll int n,a;
    ll int add=0;
    cin>>n;
    vector<pair<ll int,ll int>> v;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(make_pair(a,i+1));
    }
    sort(v.begin(),v.end());
    cout<<n-1<<endl;
    for(int i=0;i<n-1;i++){
        add=(v[i].first)-((v[i+1].first)%v[i].first);
        v[i+1].first=v[i+1].first + add;
        cout<<v[i+1].second<<" "<<add<<endl;
    }
}
return 0;
}