#include<iostream>
#include<string.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    char a[100];
    cin>>a;
    int n=strlen(a);
    if(n%2!=0){
        cout<<"NO"<<endl;
    }
    else{
       int sum=0;
       for(int i=0;i<n/2;i++){
        if(a[i]==a[n/2 + i]){
            sum++;
        }
       }
       (sum==n/2)?cout<<"YES"<<endl:cout<<"NO"<<endl;
       
    }
}
return 0;
}