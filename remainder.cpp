#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int x,y,n;
    cin>>x>>y>>n;
    int z=n%x;
    if(z>y){
        cout<<n-(z-y)<<endl;
    }
    else if(z<y){
        cout<<n-(z+x-y)<<endl;
    }
    else if(z==y){
        cout<<n<<endl;
    }
}
return 0;
}