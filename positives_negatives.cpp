#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int t;
cin>>t;
while(t--){
    ll int n,a;
    cin>>n;
    vector<ll int> v;
    ll int sum=0;
    ll int neg=0;
    bool zero=false;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a<0){
            neg++;
        }
        else if(a==0){
            zero=true;
        }
        v.push_back(abs(a));
        sum+=abs(a);
    }
    if((neg%2==0) || ((neg%2!=0) && (zero))){
        cout<<sum<<endl;
    }
    else{
        ll int m=*min_element(v.begin(),v.end());
        cout<<sum-(2*m)<<endl;
    }
}
return 0;
}