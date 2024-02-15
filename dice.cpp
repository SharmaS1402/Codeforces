#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int m;
cin>>m;
ll int y=1e9+7;
vector<ll int> solve(m+1,0);
vector<int> dice={1,2,3,4,5,6};
solve[1]=1;solve[0]=1;
for(int x=2;x<=m;x++){
    for(auto d: dice){
        if(x-d >=0){
            solve[x]+=solve[x-d];
        }
    }
    solve[x]%=y;
}
cout<<solve[m]<<endl;

return 0;
}