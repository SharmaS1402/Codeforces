#include<iostream>
using namespace std;
int main(){
    int t,x,n;
    cin>>t;
    while(t--){
        cin>>n>>x;
        if(n<=2){
            cout<<1<<endl;
        }
        else{
        for(int i=0;i<1000;i++){
            if((n>=i*x+3)&&(n<=(i+1)*x+2)){
                cout<<i+2<<endl;
                break;
            }
        }
        }
        
    }
    

return 0;
}