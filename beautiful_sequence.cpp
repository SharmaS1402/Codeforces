#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n];
    int flag=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        if(i>=a[i]){
            flag=1;
            break;
        }
    }
    (flag==1)?cout<<"YES"<<endl:cout<<"NO"<<endl;
}
return 0;
}