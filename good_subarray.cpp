#include <bits/stdc++.h>
using namespace std;
#define ll long long
 int t,n;
ll int ans,sum,ele,v;
string s;
vector<ll int> pref(200005);
unordered_map<ll int,ll int> m;
int main(){
cin>>t;
while(t--){
    sum=0;
    ans=0;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++){
        sum+=(s[i]-'0');
        pref[i]=sum;
    }
    for(int i=0;i<n;i++){
        ele=pref[i]-i-1;
        if(m.find(ele)!=m.end()) m[ele]++;
        else m[ele]=1;
    }
    ans+=m[0];
    for(auto it : m){
        v=it.second;
        ans+=((v*(v-1))/2);
    }
    cout<<ans<<endl;
    m.clear();
}
return 0;
}