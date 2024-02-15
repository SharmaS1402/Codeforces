#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int n,median;
ll int ans=1e16;ll int sum=0;
cin>>n;
vector<ll int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
sort(v.begin(),v.end());
if(n%2!=0){
   median=n/2;
   for(int i=0;i<n;i++){
        sum+=abs(v[i]-v[median]);
   }
   cout<<sum<<endl;
}
else{
    int x=2;
    while(x--){
        int median=(n/2 - x);
        for(int i=0;i<n;i++){
        sum+=abs(v[i]-v[median]);
   }
   ans=min(ans,sum);
   sum=0;
    }
    cout<<ans<<endl;
}
return 0;
}