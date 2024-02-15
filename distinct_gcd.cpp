#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll int> v(100005);

int main(){
int t;
cin>>t;
while(t--){
    ll int n,l,r;
    bool ans =true;
    cin>>n>>l>>r;
    for(int i=1;i<=n;i++){
        v[i]=r%i;
        if(v[i]>(r-l)){
            ans=false;
            break;
        }
    }
    if(ans){
        cout<<"YES"<<endl;
        for(int i=1;i<=n;i++){
            cout<<r-v[i]<<" ";
        }cout<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
return 0;
}