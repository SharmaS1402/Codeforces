#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if((n>=1 && n<=10)|| (n%10==0)){
            cout<< 1<<endl;
            cout<< n;
        }
        
    }

return 0;
}