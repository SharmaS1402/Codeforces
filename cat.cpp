#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    char a[n];
    cin>>a;
    vector <char> v(a,a+n);
    for(int j=0;j<n-1;j++){
        if(v[j]==v[j+1]){
            v.erase(v.begin()+j);
        }
    }
    int e=v.size();
    char str1[e];
    cout<<e;
    for(int i=0;i<e;i++){
        str1[i]=v[i];
    }
    cout<<str1;
    char str[]="meow";
    int k =strcmpi(str,str1);
    if(k==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

return 0;
}