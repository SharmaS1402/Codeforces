#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int main(){
    char a[1000];
    gets(a);
    int n=strlen(a);
    vector <char> v(a,a+n);
    
    if(v[0]>=97){
        v[0]=v[0]-32;
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }


return 0;
}