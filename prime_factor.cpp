#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int> v;
int k=sqrt(n);
for(int i=2;i<=k;i++){
    while(n%i==0){
        n/=i;
        v.push_back(i);
    }
}
if(n>1) v.push_back(n);
for(auto ele: v){
    cout<<ele<<" ";
}cout<<endl;
return 0;
}