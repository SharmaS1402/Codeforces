#include<iostream>
using namespace std;
int r(int *n,int a){
    *n=*n%a;
    return *n;
}
int main(){
    int n;
    cin>>n;
    int *j=&n;
    cout<<""<<n/100 + r(j,100)/20 +r(j,20)/10 + r(j,10)/5 + r(j,5)/1;

return 0;
}