#include<iostream>
using namespace std;
int main(){
int a[5][5];
int i,j;
int flag=0;
for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        cin>>a[i][j];
        }
    }
    int k,w;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(a[i][j]==1){
                k=i;
                w=j;
                break;
                flag=1;
            }
        }
        if(flag==1){
            break;
        }
    }
int l=k-2;
int m=w-2;
if(l<0){
    l=-1*l;
}
if(m<0){
    m=-1*m;
}
cout<<l+m<<endl;

return 0;
}