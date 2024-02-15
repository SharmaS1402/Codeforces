#include<iostream>
#include<vector>
using namespace std;
int main(){
int n,k,l,c,d,p,nl,np;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;
int u=(k*l)/nl;
int v=(c*d);
int w=p/np;
if((u<=v)&&(u<=w)){
    cout<<u/n<<endl;
}
else if((v<=u)&&(v<=w)){
    cout<<v/n<<endl;
}
else if((w<=u)&&(w<=v)){
    cout<<w/n<<endl;
}


return 0;
}