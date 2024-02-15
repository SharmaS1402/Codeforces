#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int faces=0;
while(n--){
char a[12];
cin>>a;
if(a[0]=='T'){
    faces+=4;
}
if(a[0]=='C'){
    faces+=6;
}
if(a[0]=='D'){
    faces+=12;
}
if(a[0]=='I'){
    faces+=20;
}
if(a[0]=='O'){
    faces+=8;
}
}
cout<<faces<<endl;
return 0;
}