#include<iostream>
#include<algorithm>
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
    int k=*max_element(a,a+n);
    int l=*min_element(a,a+n);
    cout<< k-l<<endl;
}
return 0;
}