#include <bits/stdc++.h>
using namespace std;
int main(){
string s;
int ans=0;
int sum=0;
unordered_map<char,int> m;
cin>>s;
int i=0;
while(i<s.length()){
    if(m.find(s[i])==m.end()){
        sum++;
        m[s[i]]=i;
        i++;
    }
    else{
        ans=max(ans,sum);
        sum=0;
        i=m[s[i]]+1;
        m.clear();
    }
}
ans=max(ans,sum);
cout<<ans<<endl;
return 0;
}