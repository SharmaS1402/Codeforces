#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll int t,n,ele;
int main(){
cin>>n>>t;
vector<ll int> pref(n+1);
for(int i=1;i<=n;i++){
    cin>>ele;
    pref[i]=pref[i-1]+ele;
}
int lo=0;int hi=1;int ans=0;
while(hi<=n ){
    if(pref[hi]-pref[lo]<=t){
        ans=max(ans,hi-lo);
        hi++;
    }
    else{
        lo++;
    }
}
cout<<ans<<endl;
return 0;
}