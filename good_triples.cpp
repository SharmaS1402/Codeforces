#include <bits/stdc++.h>
using namespace std;
#define ll long long
string s;
vector<ll int> v={1,3,6,10,15,21,28,36,45,55};
int main(){
int t;
cin>>t;
while(t--){
ll int ans=1;
cin>>s;
int k=s.length();
for(int i=0;i<k;i++){
    ans=ans*v[(s[i]-'0')];
}
cout<<ans<<endl;
}

return 0;
}