#include <bits/stdc++.h>
using namespace std;
set<int> s;
int get_digits(int n){
    while(n>0){
        s.insert(n%10);
        n/=10;
    }
    int y=*(--s.end());
    s.clear();
    return y;
}
int main(){
int m;
cin>>m;
if(m<10) cout<<1<<endl;
else{
vector<int> steps(m+1);
steps[9]=1;
for(int x=10;x<=m;x++){
    steps[x]=steps[x-get_digits(x)]+1;
}
cout<<steps[m]<<endl;
}
return 0;
}