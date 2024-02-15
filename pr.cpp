#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> arr(200005,0);
vector<ll int> pfx(200005,0);
int n,k,x;
int main(){
int t;
cin>>t;
while(t--){
    cin>>n>>k>>x;
    ll int ans=-1e9;
    ll int sum=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.begin()+n+1);
    for(int i=1;i<=n;i++){
        pfx[i]=pfx[i-1]+arr[i];
    }
    for(int i=0;i<=k;i++){
        if((n-i) < x){ sum = -1*pfx[n-i];}
        else{
         sum=(2*pfx[n-i-x]) - (pfx[n-i]);
        }
        ans=max(ans,sum);
        
    }
    cout<<ans<<endl;

}
return 0;
}