#include <bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int> ans(n+1);
    string s;
    cin>>s;
    int e=0;
    int ne=0;
    int lo=0;int hi=n-1;
    while(lo<hi){
        if(s[lo]==s[hi]){
            e++;
        }
        else{
            ne++;
        }
        lo++;hi--;
    }
    if(n%2==0){
    for(int i=0;i<=e;i++){
        ans[ne+2*i]=1;
    }
    for(int i=0;i<=n;i++){
        cout<<ans[i];
    }cout<<endl;
    }
    else{
        for(int i=0;i<=e;i++){
        ans[ne+2*i]=1;
    }
    ne=ne+1;
    for(int i=0;i<=e;i++){
        ans[ne+2*i]=1;
    }
    for(int i=0;i<=n;i++){
        cout<<ans[i];
    }cout<<endl;

    }
    


}
return 0;
}