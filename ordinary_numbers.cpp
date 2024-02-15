#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int sum=0;
    for(int k=1;k<=n;k=k*10+1){
        for(int d=1;d<=9;d++){
            if(k*d<=n){
                sum++;
            }
        }
    }
    cout<<sum<<endl;
}
return 0;
}