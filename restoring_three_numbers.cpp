#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
     vector <int> v(4);
    cin>>v[0]>>v[1]>>v[2]>>v[3];
    int n=*max_element(v.begin(),v.end());
    for(int i=0;i<4;i++){
        int k= n-v[i];
        if(k!=0){
            cout<<k<<endl;
        }
    }


return 0;
}