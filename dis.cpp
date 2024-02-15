#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int a[3];
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    vector<int> v(a,a+3);
    cout<<*max_element(v.begin(),v.end())-*min_element(v.begin(),v.end());

    

return 0;
}