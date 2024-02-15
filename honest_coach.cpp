#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    vector<int> v(n-1);
    for(int i=0;i<n-1;i++){
        v[i]=a[i+1]-a[i];
    }
    int w=*min_element(v.begin(),v.end());
    cout<<w<<endl;


}
return 0;
}