#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    for(int i=1;i<n;i++){
        int best=0;
        int worst=0;
        for(int j=0;j<i;j++){
            if(a[i]>a[j]){
                best++;
            }
            if(a[i]<a[j]){
                worst++;
            }
        }
        if(best==i||worst==i){
            sum++;
        }

    }
    cout<<sum<<endl;

return 0;
}