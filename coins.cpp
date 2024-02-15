#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,a,b,c;
    cin>>a>>b>>c>>n;
    int w[]={a,b,c};
    sort(w,w+3);
    int l=(w[2]-w[1])+(w[2]-w[0]);
    if(l>n){
        cout<<"NO"<<endl;
    }
    else{
    int k=n+a+b+c;
   (k%3==0)?cout<<"YES"<<endl:cout<<"NO"<<endl;
}}
return 0;
}