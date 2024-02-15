#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll int y=1e9+7;
int main(){
int n;
cin>>n;
string s;
int save=0;
int best=0;
ll int path[n+1][n+1];

for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){            //initialize every element to -1
        path[i][j]=-1;
    }
}

for(int j=1;j<n;j++) path[n][j]=1;   //initialize last row and last column elements to 1
for(int i=1;i<n;i++) path[i][n]=1;

for(int i=1;i<=n;i++){                 //taking input , if * is there make no of paths=0
    cin>>s;
    for(int j=0;j<n;j++){
        if(s[j]=='*') {
            path[i][j+1]=0;
            if(j==n-1) best=max(best,i);
            if(i==n) save=max(save,j+1);
        }
    }
}
if(n==1 && s==".") cout<<1<<endl;
else{
for(int i=1;i<best;i++) path[i][n]=0;       //if there is a * in last row or last column then 
for(int j=1;j<save;j++) path[n][j]=0;  // no of possible paths from the elements before the * is also 0

for(int i=n-1;i>0;i--){
    for(int j=n-1;j>0;j--){
        if(path[i][j]!=0){                          //using dp to solve the problem
        path[i][j]=path[i+1][j] + path[i][j+1];
        path[i][j]%=y;
        }
    }
}
  
cout<<path[1][1]<<endl;      
}               //output the answer
return 0;
}