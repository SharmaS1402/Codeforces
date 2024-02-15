#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    char m;
    cin>>m;
    if(m=='c'|| m=='o' || m=='d'|| m=='e'|| m=='f'|| m=='r'|| m=='s'){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
return 0;
}