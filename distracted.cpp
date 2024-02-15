#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char a[n];
        gets(a);
        vector <char> v(a,a+n);
        for(int i=0;i<n-1;i++){
            if(v[i]==v[i+1]){
                v.erase(v.begin()+i);
            }
        }
        for(int i=0;i<n-1;i++){
            int sum=0;
            for(int j=i+1;j<n;j++){
                if(v[i]==v[j]){
                    sum++;
                }
            }
            if(sum==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }


    }



return 0;
}