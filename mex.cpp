#include <bits/stdc++.h>
using namespace std;
int t,n;
vector<int> v(110);
int main(){
cin>>t;
while(t--){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=(n-i)*(i+1);
        if(v[i]==0) ans+=(n-i)*(i+1);
    }
    cout<<ans<<endl;
}
return 0;
}