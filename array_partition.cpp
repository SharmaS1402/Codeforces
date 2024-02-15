#include <bits/stdc++.h>
using namespace std;
vector<int> v(200005);
int t,n;
int main(){
cin>>t;
while(t--){
    int ans=0;
    cin>>n;;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    for(int k=1;k<=n;k++){
        if(n%k==0){
        int g=0;
        for(int i=1;i<=(n-k);i++){
            g=__gcd(g,abs(v[i+k]-v[i]));
        }
        ans+=(g!=1);
        }
    }
    cout<<ans<<endl;
}
return 0;
}