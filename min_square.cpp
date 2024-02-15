#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    int k=max(a,b);
    int w=min(a,b);
    int z=2*w;
    if(z>k){
        cout<<z*z<<endl;
    }
    else{
        cout<<k*k<<endl;
    }
}
return 0;
}