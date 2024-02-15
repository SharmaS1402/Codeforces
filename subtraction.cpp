#include <bits/stdc++.h>
using namespace std;
int t,n,k;
vector<int> v(200005);
void solve(){
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.begin()+n);
    int l=0;int r=1;
    while(r<n){
        if(v[r]-v[l] > k){
            l++;
            if(l==r) r++;
        }
        else if(v[r]-v[l] < k){
            r++;
        }
        else {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
cin>>t;
while(t--){
    solve();
}
return 0;
}