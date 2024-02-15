#include <bits/stdc++.h>
using namespace std;
vector<int> v={0,4,45,49,459,499,4599,4999,45999,49999};
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    if(n%2==0){
        cout<<n/2<<" "<<n/2<<endl;
    }
    else{
        int l=n/2;
        int m=l+1;
        if((l)%10==9){
            string s=to_string(l);
            int x=s.length();
            int k=0;
            while(x--){
                if(s[x]=='9'){ k++;}
                else{break;}
            }
            l-=v[k];
            m+=v[k];
            cout<<l<<" "<<m<<endl;

        }
        else{
            cout<<l<<" "<<m<<endl;
        }
        
    }
}
return 0;
}