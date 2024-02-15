#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(n==1){
        cout<<0<<endl;
    }
    else{
    sort(v.begin(),v.end());
    int i=0;
    int l=n-1;
    int lo=v[i];
    int hi=v[l];
    int sum=0;
    while(lo<hi){
        int k=hi-lo;
        sum+=k;
        lo=v[++i];
        hi=v[--l];
    }
    cout<<sum<<endl;
    }


}
return 0;
}