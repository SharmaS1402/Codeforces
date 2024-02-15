#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<k;i++){
       int sum=v[0]+v[1];
       int l=v[v.size()];
       if(sum>l) v.erase(v.end());
       else{
        v.erase(v.begin());
        v.erase(v.begin());
       }
    }
    int sum=0;
    for(int i=0;i<v.size();i++){
        sum=sum+v[i];
    }
    cout<<sum<<endl;
}
return 0;
}