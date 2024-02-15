#include<iostream>
#include<string.h>
using namespace std;
int main(){
char str1[]= " I hate that";
char str2[]= " I love that";
int n;
cin>>n;
if(n==1){
    cout<<" I hate it";
}
else if(n%2!=0){
    for(int i=0;i<(n-1)/2;i++){
        cout<<str1<<str2;
    }
    cout<<" I hate it"<<endl;
}
else{
for(int i=0;i<(n/2)-1;i++){
    cout<<str1<<str2;
}
cout<<" I hate that I love it"<<endl;
}

return 0;
}