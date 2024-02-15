#include <bits/stdc++.h>
using namespace std;
int main(){
int n,k;
cin>>n>>k;
string s;
cin>>s;
if(n==1 && k>0){
   cout<<0<<endl;
}
else if(k==0) {
    cout<<s<<endl;
}
else{ 
    if(s[0]!='1'){
     s[0]='1';
      k--;
    }
   int l=1;
   while(k>0 && l<=n-1){
    if(s[l]!='0'){
        s[l]='0';
        k--;
    }
    l++;
   }
   cout<<s<<endl;
   
}
return 0;
}