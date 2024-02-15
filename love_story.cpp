#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    char a[]="codeforces";
char b[10];int s=0;
cin>>b;
for(int i=0;i<10;i++){
    if(a[i]-b[i] != 0) s++;
}
cout<<s<<endl;

}
return 0;
}