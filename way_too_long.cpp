#include<iostream>
#include<string.h>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    // char arr[n];
    // cin>>arr;
    // char *ptr=&arr[0];
    // if(n<10){
    //     cout<<arr;

    // }
    // else{
    //     cout<<""<<*ptr<<n<<*(ptr+n-1);
    // }
    int n;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a[n];
    for(int i=0;i<n;i++){
        a[i]=strlen(arr[i]);
    }


return 0;
}