#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int k=n/3;
    int z=n%3;
    if(z==0){
        cout<<" "<<k<<" "<<k<<endl;
    }
    else if(z==1){
        cout<<" "<<k+1<<" "<<k<<endl;
    }
    else if(z==2){
        cout<<" "<<k<<" "<<k+1<<endl;
    }
    
}
return 0;
}