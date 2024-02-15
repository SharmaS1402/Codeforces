#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a[t][2];
    for(int i=0;i<t;i++){
        for(int j=0;j<2;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<t;i++){
        cout<<((23-a[i][0])*60 + (60-a[i][1]))<<endl;
    }

return 0;
}