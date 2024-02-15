#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int n; 
cin>>n;
vector<int> v(n);
int a[n];
int b[n];
int k=0;
for(int i=0;i<n;i++){
    cin>>a[i]>>b[i];
     k = k + b[i]-a[i];
     v.push_back(k);
}
int w=*max_element(v.begin(),v.end());
cout<<w<<endl;
return 0;
}