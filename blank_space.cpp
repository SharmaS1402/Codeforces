#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;cin>>n;int r=0;
    int m;int b[n];int k=0;
    for(int i=1;i<=n;i++){
        cin>>m;
        if(m==1){
            b[k++]=i;
        }
        else r++;
    }
    if(r==n) cout<<n<<endl;
    else{
    int l=b[0]-1;
    for(int i=0;i<k-1;i++){
        l=max(l,b[i+1]-b[i]-1);
    }
    l=max(l,n-b[k-1]);
    cout<<l<<endl;
    }
}
return 0;
}