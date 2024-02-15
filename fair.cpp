#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
int a[4];
for(int i=0;i<4;i++){
    cin>>a[i];
}
if(a[0]<a[1]){
    swap(a[0],a[1]);
}
if(a[2]<a[3]){
    swap(a[2],a[3]);
}
vector<int> v(a,a+4);
sort(v.begin(),v.end());
if((a[0]>a[2])&&(a[1]==v[2])){
    cout<<"NO"<<endl;

}
else if((a[0]<a[2])&&(a[3]==v[2])){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}
    }
return 0;
}