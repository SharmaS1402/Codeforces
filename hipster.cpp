#include<iostream>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
int n=min(a,b);
int k = max(a,b)- n;
cout<<" "<<n<<" "<< k/2<<endl;

return 0;
}