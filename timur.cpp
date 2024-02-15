#include <bits/stdc++.h>
using namespace std;
#define ll long long
int t,n,q,j,ans,key;
ll int ele=0;
vector<ll int> v(150005);
map<ll int,int> m;
int main(){
cin>>t;
while(t--){
    cin>>n>>q;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.begin()+n,greater<int>());
    for(int i=0;i<n;i++){
        ele+=v[i];
        m[ele]=i+1;
    }
    while(q--){
        cin>>j;
       auto itr = m.lower_bound(j);
       if(itr!=m.end()){
        ans=(*itr).second;
       }
       else{
        ans=-1;
       }
       cout<<ans<<endl;
    }
           m.clear();
           ele=0;
}
return 0;
}