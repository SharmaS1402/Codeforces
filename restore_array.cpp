#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        n--;
    int b[200005];
    for(int i=0;i<n;i++){
         cin>>b[i];
    }
    cout<<b[0]<<" ";
    for(int i=0;i<n-1;i++){
        cout<<min(b[i],b[i+1])<<" ";
    }
    cout<<b[n-1];
    cout<<endl;
    }
    
return 0;
}