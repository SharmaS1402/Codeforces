#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
bool ans=true;
vector<int> v(n);
int max_idx=0;
for(int i=0;i<n;i++){
    cin>>v[i];
    if(v[i]>v[max_idx]){
        max_idx=i;
    }
}
// cout<<max_idx<<endl;
int max;
for(int i=0;i<n-1;i++){
   max=v[max_idx];
   
if((max_idx-1)>=0 && (v[max_idx-1]==(max-1))){
    v.erase(v.begin()+max_idx);
     max_idx=max_idx-1;
}
else if((max_idx+1)<v.size() && (v[max_idx+1]==(max-1))){
    v.erase(v.begin()+max_idx);
    // max_idx=max_idx+1;
}
else{
    ans=false;
    break;
}
}
if(ans){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

return 0;
}