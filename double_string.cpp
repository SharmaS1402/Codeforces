#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<string> v(n);
    map<string,bool> m;
    for(int i=0;i<n;i++){
        cin>>v[i];
        m[v[i]]=true;
    }
    for(int i=0;i<n;i++){
        bool ok=false;
        for(int j=1;j<v[i].length();j++){
            string pref=v[i].substr(0,j);
            string suff=v[i].substr(j,v[i].length()-j);
            if(m[pref] && m[suff]){
              ok=true;
            }
        }
        cout<<ok;
    }
    cout<<endl;
}
return 0;
}