#include<iostream>
#include<string.h>
using namespace std;
int main(){
char str1[100];
char str2[100];
cin>>str1;
cin>>str2;
int k=strcmpi(str1,str2);
cout<<k<<endl;

return 0;
}