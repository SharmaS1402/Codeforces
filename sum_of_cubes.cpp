#include <bits/stdc++.h>
using namespace std;
#define ll long long
int t;
ll int n;
int main(){
cin>>t;
while(t--){
    bool ans=false;
    cin>>n;
    unordered_set<ll int> s;
    for(ll int i=1;i<=10000;i++){
        s.insert(i*i*i);
    }
    for(ll int i=1;i<=10000;i++){
        if(s.find(n-i*i*i)!=s.end()){
            ans=true;
            break;
        }
    }
    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
return 0;
}