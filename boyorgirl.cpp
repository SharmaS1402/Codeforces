#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
int main()
{
    char a[100];
    gets(a);
    int n = strlen(a);
    vector<char> v(a,a+n);
   for(int i=0;i<n-1;i++){
    int sum=0;
    for(int j=i+1;j<n;j++){
        if(v[i]==v[j]){
            sum++;
        }
    }
    if(sum>=1){
        v.erase(v.begin()+i);
    }
   }  
    int k;
    k=v.size();
    cout<<k<<endl;
    for(int i=0;i<k;i++){
        cout<<v[i];
    }
    
    if(k%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}