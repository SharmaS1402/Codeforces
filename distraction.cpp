#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    char a[n];
    cin>>a;
    int flag=0;
    for(int i=0;i<n-1;i++){
        if(a[i]!=a[i+1]){
            for(int j=i+2;j<n;j++){
                if(a[i]==a[j]){
                    cout<<"NO"<<endl;
                    flag=1;
                    break;
                }
                
            }
           if(flag==1){
            break;
           }
           else{
            continue;
           }
    }
}
if(flag==0){
    cout<<"YES"<<endl;
}
}
return 0;
}