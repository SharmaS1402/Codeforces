#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;int b[100000]; int k=100000;
cin>>n;
int m;
for(int i=1;i<=n;i++){
cin>>m;
b[m]=i;
}
int t;
for(int i=1;i<=n;i++){
     t=abs(b[i]-i);
    swap(b[i],i);
   if(t==0) continue;
   else k=min(t,k);
}

cout<<k<<endl;
}
return 0;
}