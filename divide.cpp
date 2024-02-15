#include <bits/stdc++.h>
using namespace std;
int divide(int dividend, int divisor) {
        bool ok=false;
        if((dividend>=0 && divisor>0) || (dividend<0 && divisor<0) ){
            ok = true;
        }
        long long int ans =(long long ) 0;
        long long int x=(long long )abs(dividend) ;
        if(abs(divisor)!=1){
            x-=abs(divisor);
        }
        while(x>=0){
            x-=abs(divisor);
            ans++;
        }
        if(ok){
            if(ans>2147483647) return 2147483647;
            else return ans;
        }
        else{
            if(ans>2147483648) return -2147483648;
            else  return -ans;
        }
        
    }
int main(){
    cout<< divide(-2147483648,1)<<endl;
return 0;
}