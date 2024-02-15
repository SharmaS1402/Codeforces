#include <bits/stdc++.h>
using namespace std;
int n,t;
string s;
int main(){
cin>>t;
while (t--)
{
    int ans;
    int sum=0;
    vector<int> v(26);
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++){
        v[s[i]-'a']++;
    }
    sort(v.begin(),v.end(),greater<int>());
    for(int i=1;i<26;i++) sum+=v[i];
    if(v[0]>=sum) ans=v[0]-sum;
    else{
        if(n%2==0) ans=0;
        else ans=1;
    }
    cout<<ans<<endl;
}

return 0;
}