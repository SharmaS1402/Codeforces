#include <bits/stdc++.h>
using namespace std;
    double myPow(double x, int n) {
        if(n==0) return 1; 
        if(n==1) return x;
        double ans=1;
        for(int i=1;i<=abs(n);i++){
            ans*=x;
        }
        if(n>0) return ans;
        else {
            return (1/ans);
        }
        
    }
int main(){
double x;
int n;
cin>>x>>n;
cout<<myPow(x,n)<<endl;
return 0;
}