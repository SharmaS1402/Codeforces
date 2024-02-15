#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    bool ans=true;
    vector<int> d(n);
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>d[i];
    }
    a[0]=d[0];
    for(int i=1;i<n;i++){
        if((d[i]==0) || (a[i-1]-d[i]<0)){
            a[i]=a[i-1]+d[i];
        }
        else{
            ans=false;
            break;
        }
    }
    if(ans){
        for(auto ele: a){
            cout<<ele<<" ";
        }cout<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}
return 0;
}