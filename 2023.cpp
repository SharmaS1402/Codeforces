#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;
ll int ele,q,r,sub;
vector<ll int> pref(100005);
vector<int> odd(100005);
int main(){
int t;
cin>>t;
while(t--){
    cin>>n;
    vector<ll int> ans(n+1);
    pref[0]=0;
    odd[0]=0;
    for(int i=1;i<=n;i++){
        cin>>ele;
        pref[i]=pref[i-1]+ele;
        if(ele%2!=0) odd[i]=odd[i-1]+1;
        else odd[i]=odd[i-1];
    }
    ans[1]=pref[1];
    if(n==1) {cout<<ans[1]<<endl;}
    else{
        ans[2]=(pref[2]/2)*2;
        for(int i=3;i<=n;i++){
           if(odd[i]==0 || odd[i]==2) ans[i]=pref[i];
           else if(odd[i]==1) ans[i]=pref[i]-1;
            else{
                 q=odd[i]/3;
                 r=odd[i]%3;
                 sub=q+((r==1)? 1 : 0);
                 ans[i]=pref[i]-sub;
            }
        }
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
    }
}
return 0;
}