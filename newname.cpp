#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    char a[100];
    cin>>a;
    int n=strlen(a);
    int sum=0;
    if(n==1&&a[0]=='^'){
        cout<<1<<endl;
    }
    else{
        if(a[0]=='_'){
        sum++;
    }
    if(a[n-1]=='_'){
        sum++;
    }
    for(int i=0;i<n-1;i++){
        if(a[i]=='_'&&a[i+1]=='_'){
            sum++;
        }
    }
    cout<<sum<<endl;
    }
    
}
return 0;
}