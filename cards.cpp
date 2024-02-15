#include <bits/stdc++.h>
using namespace std;
int t,w,h,n,ans,x,y,z;
int num(int a){
    int sum=0;
    while(a%2 == 0){
        a/=2;
        sum++;
    }
    return sum;
}
int main(){
ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    while(t--){
        cin>>w>>h>>n;
        if(w%2!=0 && h%2!=0){
            ans=1;
        }
        else if(w%2==0 && h%2!=0){
            x=num(w);
            ans=pow(2,x);
        }
        else if(w%2!=0 && h%2==0){
            x=num(h);
            ans=pow(2,x);
        }
        else{
            x=num(w);
            y=num(h);
            ans=pow(2,x) * pow(2,y);
        }
        if(ans >= n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        

        
    }
return 0;
}