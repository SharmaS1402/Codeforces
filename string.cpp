#include <bits/stdc++.h>
using namespace std;
int main(){
int q;
cin>>q;
while(q--){
    string s;
    string t;
    bool eq=false;
    cin>>s>>t;
    for(int i=0;i<s.length();i++){
        for(int j=0;j<t.length();j++){

        if(s[i]==t[j]){
          eq=1;
            break;
        }
        }
    }
    if(eq){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
return 0;
}