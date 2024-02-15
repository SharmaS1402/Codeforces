#include <bits/stdc++.h>
using namespace std;
string s;
vector<char> arr={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
int main(){
int t;
cin>>t;
while(t--){
    int n,k,m;
    bool x=true;
    cin>>n>>k>>m;
    cin>>s;
    string comp,ans;
    for(int i=0;i<k;i++){
        comp+=arr[i];
    }
    int i=0;
    while(i<(n*k)){
        ans=s.substr(i,k);
        sort(ans.begin(),ans.end());
        if(ans!=comp) {
            x=false;
            break;
        }
        i+=k;
    }
    if(x){ cout<<"YES"<<endl;}
    else{
        string y;
        char ele;
        cout<<"NO"<<endl;
        int pos= (i/k)+1;
        for(int i=1;i<pos;i++){
            y+=arr[i-1];
        }
        vector<bool> is(26);
        for(int i=0;i<ans.length();i++){
            is[ans[i]-'a']=true;
        }
        for(int i=0;i<26;i++){
            if(!is[i]){
                ele=i;
                break;
            }
        }
        y+=arr[ele];
        for(int i=pos+1;i<=n;i++){
            y+=arr[i-1];
        }
        cout<<y<<endl;
    }
}
return 0;
}