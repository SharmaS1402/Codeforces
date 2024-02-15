#include <bits/stdc++.h>
using namespace std;
int arr[100005];
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    set<int> s;
    int ans=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        if(i==1){
            continue;
        }
        if(arr[i]>arr[i-1]){
            s.insert(arr[i-1]);
        }
        else if(arr[i]<arr[i-1]){
            s.insert(arr[i-1]);
            ans=s.size();
        }
        if(s.count(arr[i])){
            ans=s.size();
        }
    }
    cout<<ans<<endl;
}
return 0;
}