#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int k;
    cin>>k;
    vector<int> v(2000,1);
    for(int i=1;i<=2000;i++){
        if(i%3==0 || i%10==3){
            v[i]=0;
        }
    }
    vector<int> r;
    for(int i=1;i<=2000;i++){
        if(v[i]!=0){
            r.push_back(i);
        }
    }
    cout<<r[k-1]<<endl;
}
return 0;
}