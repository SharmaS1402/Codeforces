#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
int n;cin>>n;
do(n++),
a=n%10,b=(n/10)%10,c=(n/100)%10,d=(n/1000)%10;
while(a==b || b==c || c==d || d==a || a==c || b==d);
cout<<n<<endl;
return 0;
}