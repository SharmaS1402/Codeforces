#include<iostream>
using namespace std;
int digits(int n){
    int sum=0;
    while(n!=0){
        sum++;
        n=n/10;
    }
    return sum;
}
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int k=n%10;
int w=digits(n);
if(w==1){
    cout<<(k-1)*10 +1<<endl;
}
else if(w==2){
    cout<<(k-1)*10 +3<<endl;
}
else if(w==3){
    cout<<(k-1)*10 +6<<endl;
}
else if(w==4){
    cout<<(k-1)*10 +10<<endl;
}
}
return 0;
}