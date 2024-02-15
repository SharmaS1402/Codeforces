#include <bits/stdc++.h>
using namespace std;
int t,n;
int c=0;
string s;
int main(){
cin>>t;
while(t--){
    cin>>n;
    cin>>s;
    int ans[n];
    for(int i=0;i<n;i++){
      ans[i]='9'-s[i];
    }
    if(s[0]=='9'){
        ans[n-1]+=2;
        c=ans[n-1]/10;
        ans[n-1]=ans[n-1]%10;

        for(int i=n-2;i>=0;i--){
            ans[i]=ans[i]+1+c;
            if(ans[i]>=10){
                c=1;
                ans[i]=ans[i]%10;
            }
            else c=0;
        }

    }
    for(auto ele: ans){
        cout<<ele;
    }cout<<endl;
}
return 0;
}