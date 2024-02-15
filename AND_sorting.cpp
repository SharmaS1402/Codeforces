#include <bits/stdc++.h>
using namespace std;
int t,n,ele,ans;
int main(){
cin>>t;
while(t--){
    cin>>n;
    ans=1048575;
    for(int i=0;i<n;i++){
        cin>>ele;
        if(ele!=i) ans=ans&ele;
    }
    cout<<ans<<endl;
}
return 0;
}