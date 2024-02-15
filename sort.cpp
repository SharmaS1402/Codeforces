#include <bits/stdc++.h>
using namespace std;
int main(){
  vector<int> v;
  v.push_back(2);
  v.push_back(2);
  v.push_back(2);
  v.push_back(2);
  sort(v.begin(),v.end());
  for(auto ele:v){
    cout<<ele<<" ";
  }cout<<endl;
return 0;
}