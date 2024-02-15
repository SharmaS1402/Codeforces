#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,k,d;
    cin>>n>>k>>d;
    int ans=k;
    int a,e;
    unordered_set<int> s;
   vector<int> v;
   for(int i=0;i<n;i++){
    cin>>a;
    v.push_back(a);
   }
  int m=n-d+1;
  for(int j=0;j<m;j++){
    for(int i=0;i<d;i++){
        s.insert(v[i]);
    }
         e=s.size();
        ans=min(ans,e);
        s.clear();
        v.erase(v.begin());
  }
  cout<<ans<<endl;

}
return 0;
}