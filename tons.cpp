#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<ll> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    ll ans=-1;
    for(int k=1;k<=n;k++){
        if(n%k==0){
        ll mx=-1e18;ll mn=1e18;
        for(int i=0;i<n;i+=k){
            ll sum=0;
            for(int j=i;j<(i+k);j++){
                sum+=arr[j];
            }
            mx=max(mx,sum);
            mn=min(mn,sum);
        }
        ans=max(ans,mx-mn);
    }
    }
    cout<<ans<<endl;
}
return 0;
}