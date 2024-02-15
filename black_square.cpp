#include<iostream>
#include<string.h>
using namespace std;
int main(){
int a1,a2,a3,a4;
cin>>a1>>a2>>a3>>a4;
char s[100000];
cin>>s;
int n=strlen(s);

int calorie=0;
for(int i=0;i<n;i++){
if(v[i]==1){
    calorie=calorie+a1;
}
if(v[i]==2){
    calorie=calorie+a2;
}
if(v[i]==3){
    calorie=calorie+a3;
}
if(v[i]==4){
    calorie=calorie+a4;
}
}
cout<<calorie<<endl;

return 0;
}