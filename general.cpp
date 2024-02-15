#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int n;
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++){
    cin>>v[n];
}
int k= *max_element(v.begin(),v.end());
int l= *min_element(v.begin(),v.end());
int i=0;
int j=n-1;
while(i<n){
    if(v[i]==k){
        break;
    }
    i++;
}
while(j>=0){
    if(v[i]==l){
        break;
    }
    j--;
}
if(i>j){
    cout<< i+n-j-2<<endl;
}
else{
cout<<i+n-j-1<<endl;
}
return 0;
}