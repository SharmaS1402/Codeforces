#include <bits/stdc++.h>
using namespace std;
int t,x,m,h,l,nums;
int ans=0;
string s;
unordered_set<int> st={0,110,220,330,440,550,1001,1111,1221,1331,1441,1551,2002,2112,2222,2332};
unordered_set<int> check;
int main(){
cin>>t;
while(t--){
    cin>>s;
    cin>>x;
    h=stoi(s.substr(0,2));
    m=stoi(s.substr(3,2));
    l=1441;
    while(l--){
        nums= h*100 + m;
        if(check.find(nums)!=check.end()) {
            check.clear();
            break;
        }
        else {check.insert(nums);}

        if(st.find(nums)!=st.end()) {ans++;}
        m=m+(x%60);
        h=h+(x/60)+(m/60);
        m=m%60;
        h=h%24;
    }
    cout<<ans<<endl;
    ans=0;

}
return 0;
}