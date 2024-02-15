#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a,b,c,d;
    for(int j=0;j<t;j++){
    cin>>a>>b>>c>>d;
    int k[4]={a,b,c,d};
    int sum=0;
    for(int i=1;i<4;i++){
        if(k[i]>a){
            sum++;
        }
    }
    cout <<sum;
    cout <<endl;
    }

return 0;
}