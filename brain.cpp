#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    char a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int colour=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]=='C'|| a[i][j]=='M'|| a[i][j]=='Y'){
                colour++;
            }
        }
    }
    (colour==0)?cout<<"#Black&White"<<endl:cout<<"#Color"<<endl;

return 0;
}