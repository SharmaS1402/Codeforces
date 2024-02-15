#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int maxb = 60;

bool get_bit(ll int a, int i){
    return a&(1ll<<i);
}
int main(){
    int t;
    cin>>t;
    while(t--){
    ll int a,b,r;
    cin>>a>>b>>r;
    bool first_bit = 1;
    if(a>b) swap(a,b);
    ll int x = 0;
    for(int i=maxb-1;i>=0;i--){
        bool a_bit = get_bit(a,i);
        bool b_bit = get_bit(b,i);
        if(a_bit != b_bit){
            if(first_bit){
                first_bit = 0;
            }
            else if((!a_bit) && (x+(1ll<<i) <=r)){
                x += (1ll<<i);
                a ^= (1ll<<i);
                b ^= (1ll<<i); 
            }
        }
    }
    cout<<b-a<<endl;
    }
return 0;
}