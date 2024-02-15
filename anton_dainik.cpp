#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
char a[n];
cin>>a;
int anton=0;
int dainik=0;
for(int i=0;i<n;i++){
    if(a[i]=='A'){
        anton++;
    }
    else{
        dainik++;
    }
}
if(anton>dainik){
    cout<<"Anton"<<endl;
}
else if(dainik>anton){
    cout<<"Danik"<<endl;
}
else{
    cout<<"Friendship"<<endl;
}
return 0;
}