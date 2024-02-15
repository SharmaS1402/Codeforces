#include <bits/stdc++.h>
using namespace std;
int a,b,xk,yk,xq,yq;
unordered_set<pair<int,int>> pos_queen;
unordered_set<pair<int,int>> pos_king;
int main(){
int t;
cin>>t;
while(t--){
int ans=0;
cin>>a>>b;
cin>>xk>>yk>>xq>>yq;
auto x=make_pair(xk+a,yk+b);
pos_king.insert(x);
pos_king.insert(make_pair(xk+a,yk-b));
pos_king.insert(make_pair(xk-a,yk+b));
pos_king.insert(make_pair(xk-a,yk-b));
pos_king.insert(make_pair(xk+b,yk+a));
pos_king.insert(make_pair(xk+b,yk-a));
pos_king.insert(make_pair(xk-b,yk+a));
pos_king.insert(make_pair(xk-b,yk-a));

pos_queen.insert(make_pair(xq+a,yq+b));
pos_queen.insert(make_pair(xq+a,yq-b));
pos_queen.insert(make_pair(xq-a,yq+b));
pos_queen.insert(make_pair(xq-a,yq-b));
pos_queen.insert(make_pair(xq+b,yq+a));
pos_queen.insert(make_pair(xq+b,yq-a));
pos_queen.insert(make_pair(xq-b,yq+a));
pos_queen.insert(make_pair(xq-b,yq-a));

for(auto ele : pos_king){
    for(auto mele : pos_queen){
        if(ele==mele){
            ans++;
        }
    }
}
cout<<ans<<endl;
}
return 0;
}