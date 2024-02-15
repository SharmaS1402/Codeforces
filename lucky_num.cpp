#include <bits/stdc++.h>
using namespace std;
int t,q,d,ele,j;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cin>>t;
while(t--){
    bool ans=false;
    cin>>q>>d;
    while(q--){
        cin>>ele;
        if(ele >= d*10) ans=true;
        else{
            if(ele%10 !=0) j=ele/10;
            else j=(ele/10)-1;
            for(int i=0;i<=j;i++){
                if((ele - 10*i)%d==0){
                    ans=true;
                    break;
                }
            }
        }
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        ans=false;
        
    }
}
return 0;
}