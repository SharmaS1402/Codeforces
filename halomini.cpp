#include <bits/stdc++.h>
using namespace std;
int n,k;
int main(){
int t;
cin>>t;
while(t--){
    cin>>n>>k;
    bool alrdy=true;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        if( (i!=0)  && (v[i]<v[i-1])) alrdy=false;
    }
    if(n==1) {alrdy=true;}
    if(alrdy) cout<<"YES"<<endl;
    else {
        if(k>1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


}
return 0;
}