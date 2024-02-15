#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int> h(n+1);
for(int i=1;i<=n;i++){
    cin>>h[i];
}
vector<int> value(n+1);
value[n]=0;value[n-1]=abs(h[n]-h[n-1]);
for(int x=n-2;x>0;x--){
    if(value[x+1]>value[x+2]){
    value[x]=value[x+2]+abs(h[x]-h[x+2]);
    }
    else{
        value[x]=value[x+1]+ abs(h[x]-h[x+1]);
    }
}
cout<<value[1]<<endl;
return 0;
}