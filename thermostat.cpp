#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int n,ele;
cin>>n;
vector<int> pref(n+1);
for(int i=1;i<=n;i++){
    cin>>ele;
    pref[i]=pref[i-1]+ele;
}
ll mx=pref[1];
ll mn=pref[0];
for(int i=1;i<=n;i++){
    mx=max(mx,pfx[i]-mn);
    mn=min(mn,pfx[i]);
}

cout<<mx<<endl;
return 0;
}