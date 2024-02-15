#include <bits/stdc++.h>
using namespace std;
int t,n,k,ans,x;
char c;
map<char,bool> m;
unordered_set<char> st;
string s;
int main(){
cin>>t;
while(t--){
    x=0;
    cin>>n>>s>>k;
    for(int i=0;i<n;i++){
        st.insert(s[i]);
    }
    ans=0;
    while(k--){
        cin>>c;
        if(st.find(c)!=st.end()) x++;
        m[c]=true;
    }
    if(x==0) ans=0;
    else if(x==st.size()) ans=1;
    else {
    int e=0;
    for(int i=1;i<n;i++){
        if(m[s[i]]){
            ans=max(ans,i-e);
            e=i;
        }
    }
    }
    cout<<ans<<endl;
    m.clear();
    st.clear();
}

return 0;
}