#include <bits/stdc++.h>
using namespace std;
int main(){
int t ;
cin>>t;
while(t--){
    int n,a;
    cin>>n;
    map<int,int> m;
    for(int i=0;i<n;i++){
        cin>>a;
        m[a]=i;
    }
    int ans=-1;
    for(auto x:m ){
        for(auto y: m){
            if(__gcd(x.first,y.first)==1){
                ans=max(ans,x.second+y.second+2);
            }
        }
    }
    cout<<ans<<endl;
}
return 0;
}