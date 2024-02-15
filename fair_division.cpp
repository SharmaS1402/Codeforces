#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int n1=0;
        int n2=0;
        for(int i=0;i<n;i++){
            (a[i]==1)? n1++ : n2++;
        }
        if(n%2==0){
            
            }
        }
        else{

        }

    }

return 0;
}