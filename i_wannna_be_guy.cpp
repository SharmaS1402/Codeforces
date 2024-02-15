#include<iostream>
using namespace std;
int main(){
int n,p,l,k;
cin>>n;
int f[n];
for(int i=1;i<=n;i++){
    f[i]=1;
}
cin>>p;
for(int i=1;i<=p;i++){
    cin>>k;
    f[k]=0;
}
cin>>l;
for(int i=1;i<=l;i++){
    cin>>k;
    f[k]=0;
}
bool b=1;
for(int i=1;i<=n;i++){
    if(f[i]==1){
        b=0;
        break;
    }
}
if(!b){
    cout<<"Oh, my keyboard!"<<endl;
}
else{
    cout<<"I become the guy."<<endl;
}
return 0;
}