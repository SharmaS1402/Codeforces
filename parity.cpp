#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;
vector< ll> arr(200005);
 ll solve(int n){
    if(n==1) return arr[0];
     ll ans=arr[0];
     ll sum=ans;
    for(int i=1;i<n;i++){
        if((arr[i]+arr[i-1])%2==0){
            ans=max(ans,sum);
            if(arr[i]>0) {sum=arr[i];}
            else {
                ans=max(ans,arr[i]);
                sum=0;
            }
        }
        else{
            if(arr[i]<0){
                ans=max(ans,sum);
                ans=max(ans,arr[i]);
                if(arr[i]+sum >=0) sum+=arr[i];
                else sum=0;
            }
            else{
               if(sum<0) sum=arr[i];
               else sum+=arr[i];
            }
        }
        // cout<<sum<<endl;
        }
        ans=max(ans,sum);
        return ans;
    }
    
    
int main(){
int t;
cin>>t;
while(t--){
cin>>n;
int neg=0;
for(int i=0;i<n;i++){ 
    cin>>arr[i];
    if(arr[i]<0) neg++;
    }
    if(neg==n) cout<<*max_element(arr.begin(),arr.begin()+n)<<endl;
    else cout<<solve(n)<<endl;
}
return 0;
}