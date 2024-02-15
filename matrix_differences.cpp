#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a;
    int j=0;
    vector<vector<int>> v(n);
    for(int i=0;i<n;i++){
        int k=n;
       while(k--){
            if(j%2==0){
                a=(n*n)-(j/2);
            }
            else{
                a=j/2 + 1;
            }
            v[i].push_back(a);
            j++;
        }
    }
    for(int i=0;i<n;i++){
        if(i%2!=0){
            reverse(v[i].begin(),v[i].end());
        }
    }  
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
        cout<<v[i][j]<<" ";
       }
            cout<<endl;
        }
    } 

return 0;
}