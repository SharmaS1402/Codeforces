#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
char a[n];
cin>>a;
int stones=0;
for(int j=0;j<n-1;j++){
    if(a[j]==a[j+1]){
        stones++;
    }
}
cout<<stones<<endl;
return 0;
}