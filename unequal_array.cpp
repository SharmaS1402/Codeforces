#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll int t,n,ele,curr,total,gaps,ne,ans;
bool ok;
int main(){
cin>>t;
while(t--){
    cin>>n;
    total=0;gaps=0;ne=0;ok=true;
    cin>>curr;
    for(int i=1;i<n;i++){
        cin>>ele;
        if(ele!=curr){
            curr=ele;
            ne++;
            ok=true;
        }
        else{
            if(ok){ 
                total+=2;
                ok=false;
                if(ne>0) gaps+=(ne-1);
                ne=0;
            }
            else total++;
        }
    }
    // cout<<total<<" "<<gaps<<endl;
    ans=(total-1)/2 + gaps;
    cout<<ans<<endl;
}
return 0;
}