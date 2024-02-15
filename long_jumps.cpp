#include <bits/stdc++.h>
using namespace std;
#define ll long long
int t,n;
ll int arr[200005];
int main(){
  ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>t;
    while(t--){
        ll int ans=0;
        cin>>n;
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=n-1;i>=0;i--){
            if(i+arr[i] < n) arr[i]+=(arr[i+arr[i]]);
            ans=max(ans,arr[i]);
        }
        cout<<ans<<endl;
    }
return 0;
}