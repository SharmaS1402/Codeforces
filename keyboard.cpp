#include <bits/stdc++.h>
using namespace std;
int t;
string s;
unordered_set<int> solve(string &s){
    int n=s.length();
    unordered_set<int> ans;
    stack<int> st_lo;
    stack<int> st_hi;
    for(int i=0;i<n;i++){
        if(s[i]!='b'&& s[i]!='B'){
            if(s[i]<123 && s[i]>=97) st_lo.push(i);
            else st_hi.push(i);
        }
        else if(s[i]=='b'){
            if(!st_lo.empty()){
                ans.insert(st_lo.top());
                st_lo.pop();
            }
            ans.insert(i);
        }
        else{
            if(!st_hi.empty()){
                ans.insert(st_hi.top());
                st_hi.pop();
            }
            ans.insert(i);
        }
    }
    return ans;
}
int main(){
cin>>t;
while(t--){
cin>>s;
int n=s.length();
unordered_set<int> st=solve(s);
for(int i=0;i<n;i++){
if(st.find(i)==st.end()){
    cout<<s[i];
}
}
cout<<endl;
}
return 0;
}