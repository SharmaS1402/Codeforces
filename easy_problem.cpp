#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]==0){
            sum++;
        }
    }
    if(sum==n){
        cout<<"EASY"<<endl;
    }
    else{
        cout<<"HARD"<<endl;
    }
   
    

    

return 0;
}