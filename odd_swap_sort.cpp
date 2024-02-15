#include <bits/stdc++.h>
using namespace std;
int t,n,ele;
vector<int> arr(200005);
vector<pair<int,int>> v(200005);
bool ans,check;
int main(){
cin>>t;
while(t--){
    check=false;
    ans=true;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>ele;
        arr[i]=ele%2;
        v[i]=make_pair(ele,i);
    }
    sort(v.begin(),v.begin()+n);
    for(int i=1;i<=n;i++){
        for(int j=v[i].second+1;j<=i;j++){
            if((arr[v[i].second] + arr[j])%2 ==0 ){
                ans=false;
                check=true;
                break;
            }
            if(check ) break;
        }
    }
    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
return 0;
}