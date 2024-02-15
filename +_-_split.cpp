#include <bits/stdc++.h>
using namespace std;
int n,neg,ele,idx;
bool zero;
int main(){
int t;
cin>>t;
while(t--){
    zero = false;
    cin>>n;
    neg=0;
    for(int i=1;i<=n;i++){
        cin>>ele;
        if(ele<0){
            neg++;
            idx=i;
        }
        else if(ele==0){
            zero=true;
        }
    }
    if(zero){
        cout<<0<<endl;
    }
    else if(neg==0){
        cout<<1<<endl;
        cout<<1<<" "<<0<<endl;
    }
    else if(!zero){
       if(neg%2==0){
        cout<<1<<endl;
        cout<<idx<<" "<<0<<endl;
       }
       else{
        cout<<0<<endl;
       }
    }
}
return 0;
}