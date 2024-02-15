#include <bits/stdc++.h>
using namespace std;
# define ll long long
int main(){
int t;
cin>>t;
while(t--){
ll int x,y,n;
cin>>x>>y;
n=((x-y-1)*2)+2;
cout<<n<<endl;
for(int i=x;i>=y;i--){
    cout<<i<<" ";
}
for(int i=y+1;i<x;i++){
    cout<<i<<" ";
}cout<<endl;
}
return 0;
}