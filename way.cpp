#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int n;
    cin>>n;
   while(n>=0){
    char a[100];
    gets(a);
    int k=strlen(a);
    if(k<=10){
        puts(a);
    }
    else{
        int w=k-2;
        cout<<a[0];
        cout<<w;
        cout<<a[k-1]<<endl;
        
    }
    n--;

   }

        
    

return 0;
}