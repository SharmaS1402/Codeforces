#include <bits/stdc++.h>
using namespace std;
int main(){
int n;cin>>n;
int a=0;int b=0;int c=0;
int t;
int m=1;int j=1;int k=1;
vector<int> v1(5005);vector<int> v2(5005);vector<int> v3(5005);
for(int i=1;i<=n;i++){
    cin>>t;
    if(t==1) {a++;v1[m]=i;m++;}
    if(t==2) {b++;v2[j]=i;j++;}
    if(t==3) {c++;v3[k]=i;k++;}
}
int l=min(a,b);
int w=min(l,c);
cout<<w<<endl;
if(w!=0){
    for(int i=1;i<=w;i++){
        cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<" "<<endl;
    }
}



return 0;
}