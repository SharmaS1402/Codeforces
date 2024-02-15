#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int n= b-a;
        if(n<0){
            n=(-1)*n;
        }
        (n%10==0)?cout<<n/10<<endl:cout<< (n/10) + 1 <<endl;
    }

return 0;
}