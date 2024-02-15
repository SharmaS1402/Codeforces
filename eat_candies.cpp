#include <bits/stdc++.h>
using namespace std;
int t,n,pfx,sfx,lo,hi,ans;
vector<int> arr(200005);
int main(){
ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
       lo=1;hi=n;ans=0;
       pfx=arr[lo];sfx=arr[hi];
       while(lo<hi){
        if(pfx==sfx) {
            ans=lo+(n+1-hi);
            pfx+=arr[++lo];
            sfx+=arr[--hi];
        }
        else if(pfx<sfx) pfx+=arr[++lo];

        else   sfx+=arr[--hi];
       }
       cout<<ans<<endl;
    }
return 0;
}