#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int sum=0;
    char arr[12];
    cin>>arr;
    int n =strlen(arr);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                sum++;
            }

        }
    }
    cout<<""<<n-sum;

return 0;
}