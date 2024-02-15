#include<iostream>
using namespace std;
int main(){
int k,r;
cin>>k>>r;
int n=1;
while(n!=0){
    if((k*n)%10==r || (k*n)%10==0 ){
        cout<<n<<endl;
        break;
    }
    else{
        n=n+1;
    }
}

return 0;
}