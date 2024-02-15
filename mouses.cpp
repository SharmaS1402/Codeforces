#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int a,b,c,m,ele;
ll int ans=0;int r=0;
string s;
cin>>a>>b>>c;
cin>>m;
vector<ll int> usb;
vector<ll int> ps;
for(int i=0;i<m;i++){
    cin>>ele>>s;
    if(s=="USB") usb.push_back(ele);
    else         ps.push_back(ele);
}
int x=usb.size();
int y=ps.size();
sort(usb.begin(),usb.end());
sort(ps.begin(),ps.end());
int i=0;
while(a-- && i<x){
    ans+=usb[i++];
    r++;
}
int j=0;
while(b-- && j<y){
    ans+=ps[j++];
    r++;
}
while(c-- ){
    if(i<x && j<y){
        if(usb[i]<ps[j]){
            ans+=usb[i++];
            r++;
        }
        else{
            ans+=ps[j++];
            r++;
        }
    }
    else if(j<y) {
        ans+=ps[j++];
        r++;
    }
    else if(i<x){
        ans+=usb[i++];
          r++;}
}
cout<<r<<" "<<ans<<endl;
return 0;
}