#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    string s;
    cin>>n>>s;
    int arr[n];
    int mx=0;int ans=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(s[i]=='1'){
            ans+=max(mx,arr[i]);
        }
        if(s[i]=='0' || mx>arr[i]){
            mx=arr[i];
        }
    }
    cout<<ans<<endl;

}
return 0;
}