#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                if(a[i]==a[j]){
                    sum++;
                }
            }
            if(sum!=n-1){
                cout<<i+1<<endl;
                break;
                
            }
        }

    }

return 0;
}