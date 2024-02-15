#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int t;
cin>>t;
while(t--){
    ll int n;
    ll int line=0;
    cin>>n;
    ll int lMax=0;
    if(n%2==0){
        lMax=(3*n*n - 2*n)/4;
    }
    else{
        lMax=2*(n/2 * n - (n/2*(n/2 + 1))/2) + n-(n/2 + 1);
    }
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='L'){
            line+=i;
        }
        else{
            line+=(n-i-1);
        }
    }
    int count=0;
    int lo=0;
    int hi=n-1;
    ll int i=1;
    while(lo<hi){
        if(line==lMax) {break;}
        if(s[lo]=='L'){
            line+=(n-i);
            cout<<line<<" ";
            count++;
        }
        if(s[hi]=='R'){
            line+=(n-i);
            cout<<line<<" ";
            count++;
        }
        i+=2;
        lo++;hi--;
    }
    for(int i=0;i<(n-count);i++){
        cout<<lMax<<" ";
    }cout<<endl;


}
return 0;
}