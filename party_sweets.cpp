#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n,m;
vector<ll int> b(100005);
vector<ll int> g(100005);
int main(){
bool check=false;
ll int ans=0;
ll int sum=0;
cin>>n>>m;
for(int i=0;i<n;i++){
    cin>>b[i];
    sum+=b[i];
    }
sort(b.begin(),b.begin()+n);
    sum-=b[n-1];
for(int i=0;i<m;i++){
    cin>>g[i];
    if(g[i]==b[n-1]) check=true;
}
sort(g.begin(),g.begin()+m);
if(b[n-1]>g[0]) cout<<-1<<endl;
else{
        for(int i=0;i<m;i++){
            ans+=(g[i]+sum);
        }
        if(check) cout<<ans<<endl;
        else{
            ans=ans +  b[n-1]-b[n-2];
            cout<<ans<<endl;
        }
}
return 0;
}