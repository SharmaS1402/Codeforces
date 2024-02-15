#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a,b;
    cin>>a;
    vector<int> v;
    v.push_back(a);
    for(int i=1;i<n;i++){
        cin>>b;
        if(b!=a){
            v.push_back(b);
            a=b;
        }
    }
    if(n==1){
        cout<<"Yes"<<endl;
    }
    else{
    int f=0;
    int b=n-1;
    while(f<n){
        if(v[f]<v[f+1]){
            f++;
            break;
        }
        f++;
    }
    while(b>=0){
        if(v[b]<v[b-1]){
            b--;
            break;
        }
        b--;
    }
    if(f>=b || (b-f)==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
}
return 0;
}