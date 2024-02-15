#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char s[101];
    char t[101];
    gets(s);
    gets(t);
    strrev(t);
    (strcmp(s,t)==0)?cout<<"YES"<<endl:cout<<"NO"<<endl;

return 0;
}