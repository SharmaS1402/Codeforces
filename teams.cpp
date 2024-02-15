#include<iostream>
#include<vector>
using namespace std;
int main(){
int n,k;
cin>>n>>k;
vector<int> v(n);
int w=0;
for(int i=0;i<n;i++){
    cin>>v[i];
    if((v[i]+k)<=5){
        w++;
    }
}
cout<<w/3<<endl;

return 0;
}