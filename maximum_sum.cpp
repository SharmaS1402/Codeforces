#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
   ll sum=0;ll ans=0;
    vector<ll  > v(n);
    vector<ll > prefix(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    for(int i=0;i<n;i++){
        sum+=v[i];
        prefix[i]=sum;
    }

    ans=prefix[n-1-k];
    for(int i=1;i<k+1;i++){
        ans=max(ans,prefix[n-1-k+i]-prefix[2*i-1]);
    }
    cout<<ans<<endl;

    }
return 0;
}