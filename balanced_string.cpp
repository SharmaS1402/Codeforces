#include <bits/stdc++.h>
using namespace std;
int t,n;
set<char> st;
string s;
int main(){
cin>>t;
while(t--){
    bool ok = 1;
    cin>>s;
    n=s.length();
    int k;
    for(k=0;k<n;k++){
        if(st.find(s[k])==st.end()){
            st.insert(s[k]);
        }
        else break;
    }
    for(int i=k;i<n;i++){
        if(s[i]!=s[i-k]){
            ok=0;
        }
    }
    if(ok) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    st.clear();
}
return 0;
}