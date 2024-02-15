#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    int a[n];
    int b[n];
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
     for(int i =0;i<n;i++){
        cin>>b[i];
    }
    sort(b,b+n);
    int s=0;
    for(int i=0;i<n;i++){
        if(a[i]<b[n-i-1]){
            s++;
        }
    }
  

    if(s<k){
        for(int i=0;i<s;i++){
            swap(a[i],b[n-1-i]);
        }
    }
    else{
        for(int i=0;i<k;i++){
            swap(a[i],b[n-1-i]);
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    cout<<sum<<endl;
}
return 0;
}