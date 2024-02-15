#include <bits/stdc++.h>
using namespace std;
int main(){
vector<int> v = {1,2};
auto itr = lower_bound(v.begin(),v.end(),3);
if(itr==v.end()){
    cout<<"yw"<<endl;
}
return 0;
}