#include <bits/stdc++.h>
using namespace std;
#define ll long  long
string s;
int n;
int main(){
int t;
cin>>t;
while(t--){
    cin>>n;
    cin>>s;
    ll int red;
    ll int ans=0;
    vector<int> arr(26,0);
    for(int i=0;i<n;i++){
        arr[s[i]-'a']++;
        red=0;
        for(int i=0;i<26;i++){
            if(arr[i]>0){
                red+=(arr[i]-1);
            }
        }
        ans+=(i+1-red);
    }
    cout<<ans<<endl;
}
return 0;
}