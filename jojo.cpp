#include <bits/stdc++.h>
using namespace std;
int main(){
long long int t,l,a,ans;
cin>>t;
while(t--){
    string s;
    cin>>s;
    l=s.size();
    a=0;ans=0;
    for(int i=0;i<l*2;i++){
        if(s[i%l]=='1') a++;
        else{
            ans=max(ans,min(a,l));a=0;
        }
    }
    ans=max(ans,min(a,l));
    if(ans!=l){
        if(ans%2==0) cout<<(ans/2+1)*(ans/2)<<endl;
    else cout<<(ans/2+1)*(ans/2+1)<<endl;
    }
    else{
        cout<<l*l<<endl;
    }
}
return 0;
}