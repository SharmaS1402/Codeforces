#include<iostream>
using namespace std;
void prime(int m,int n){
    int sum=0;int k=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            k++;
        }
    }
    if(k!=0){
    cout<<"NO"<<endl;
    }
    else{
    for(int i=m+1;i<n;i++){
        int c=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                c++;
            }
        }
        if(c==0){
            sum++;
        }
    }
    (sum==0)? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
}
int main(){
int m,n;
cin>>m;
cin>>n;
prime(m,n);

return 0;
}