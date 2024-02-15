#include<iostream>
using namespace std;
int sum(int n){
    return n*(n+1)*(n+2);
}
int main(){
int n;
cin>>n;
int k=6*n;
for(int i=1;i<100;i++){
    if(sum(i)<=k&&sum(i+1)>k){
        cout<<i<<endl;
    }
}
return 0;
}