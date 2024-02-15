#include <bits/stdc++.h>
using namespace std;
int t,n;
vector<int> check(vector<int> arr,int x){
    vector<int> res;
    multiset<int> s;
    for(int i=0;i<2*n;i++){
        s.insert(arr[i]);
    }
    for(int i=0;i<n;i++){
    auto itr1=s.end();
    itr1--;
    int y=x-*itr1;
    s.erase(itr1);
    auto itr2=s.find(y);
    if(s.find(y)==s.end()){
        return {};
    }   
    res.push_back(x-y);
    res.push_back(y);
    x=max(y,x-y);
    s.erase(itr2);
    }
    return res;
}
void solve(){
    cin>>n;
    vector<int> arr(2*n);
    for(int i=0;i<2*n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<2*n-1;i++){
    int x=arr[i]+arr[2*n - 1];
    vector<int> res=check(arr,x);
    if(res.size()){
        cout<<"YES"<<endl;
        cout<<x<<endl;
        for(int j=0;j<n;j++){
            cout<<res[2*j]<<" "<<res[2*j + 1]<<endl;
        }
        return;
    }
    }
    cout<<"NO"<<endl;
    return;
}
int main(){
cin>>t;
while(t--){
    solve();
}
return 0;
}