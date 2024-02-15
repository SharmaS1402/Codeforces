#include <bits/stdc++.h>
using namespace std;
int main(){
int n,x;
cin>>n>>x;
vector<int> v(n);
vector<int> pref(n+1);
for(int i=0;i<n;i++){
    cin>>v[i];
}
sort(v.begin(),v.end());
for(int i=1;i<=n;i++){
    pref[i]=pref[i-1]+v[i-1];
}
int i;
for(i=1;i<=n;i++){
    if(pref[i]>x) break;
}
cout<<i-1<<endl;

return 0;
}