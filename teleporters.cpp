#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int t;
cin>>t;
while(t--){
    ll int n,c,a;
    ll int sum=0;
    ll int ans=-1; 
    cin>>n>>c;
    vector<int> v;
    for(int i=1;i<=n;i++){
        cin>>a;
        v.push_back(i+a);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
       sum+=v[i];
       if(sum>c){
        ans=i;
        break;
       }
    }
    if(ans==-1){
        cout<<n<<endl;
    }
    else{
        cout<<ans<<endl;
    }
}
return 0;
}