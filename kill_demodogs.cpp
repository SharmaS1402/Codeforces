#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
 ll  n;
cin>>n;
ll y=2022;
ll  x=1000000007;
ll ans=0;
if(n%3==0){
      ans=(((((((((n/3)*(n-1))%x)*(2*n-1)%x)))%x + (((n)*(n-1))/2)%x + ((n*n)%x))%x)*(y%x))%x;
}
else if((n-1)%3 == 0){
      ans=((((((((n*((n-1)/3))%x)*(2*n-1)%x)))%x + (((n)*(n-1))/2)%x + ((n*n)%x))%x)*(y%x))%x;
}
else{
      ans=((((((((n*(n-1))%x)*((2*n-1)/3)%x)))%x + (((n)*(n-1))/2)%x + ((n*n)%x))%x)*(y%x))%x;
}
cout<<ans<<endl;
    }
return 0;
}