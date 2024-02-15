#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int> v(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    if(n<3) cout<<"YES"<<endl;
    else if(v[3]>v[4]) cout<<"NO"<<endl;
    
}
return 0;
}