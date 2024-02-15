#include <bits/stdc++.h>
using namespace std;
bool pangram(string s,int n){
        if(n<26){
            return false;
        }
        transform(s.begin(),s.end(),s.begin(),::tolower);
        set<char> s1;
        for(auto ch:s){
            s1.insert(ch);
        }
        return (s1.size()==26);
}
int main(){
int n;
cin>>n;
string s;
cin>>s;
(pangram(s,n))?cout<<"Yes":cout<<"NO";
cout<<endl;
return 0;
}