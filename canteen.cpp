#include<iostream>
using namespace std;
int main(){
int n,t;
cin>>n>>t;
char a[n];
cin>>a;
for(int i=1;i<=t;i++){
    int j=0;
    while(j<n ){
        if(a[j]=='B' && a[j+1]=='G'){
            swap(a[j],a[j+1]);
            j=j+2;
        }
        else{
            j=j+1;
        }
    }
}
for(int i=0;i<n;i++){
    cout<<""<<a[i];
}
cout<<endl;
return 0;
}