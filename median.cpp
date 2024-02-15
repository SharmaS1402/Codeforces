#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n,k;
int main(){
cin>>n>>k;
vector<int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
sort(v.begin(),v.end());
ll l=v[n/2];
ll r=v[n/2]+k;

while(l!=r){
    ll mid=(l+r+1)/2;
    ll cost=0;
    for(int i=n/2;i<n;i++){
        if(mid -v[i] > 0) cost+=(mid-v[i]);
    }
    if(cost<=k) l=mid;
    else r=mid-1;
}
cout<<l<<endl;
return 0;
}