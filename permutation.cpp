#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,m;cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>m;
    a[i]=n+1-m;
}
for(int i=0;i<n;i++){
    cout<<" "<<a[i];
}
cout<<endl;
}
return 0;
}