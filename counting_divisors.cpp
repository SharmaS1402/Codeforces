#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        vector<int> v;
        int t;
        cin>>t;
        int k=sqrt(t);
        for(int i=2;i<=k;i++){
            int y=0;
            while(t%i==0){
                t/=i;
                y++;
            }
            v.push_back(y);
        }
        if(t>1) v.push_back(1);
        int ans=1;
        for(int i=0;i<v.size();i++){
            ans=ans*(v[i]+1);
        }
        cout<<ans<<endl;
    }
return 0;
}