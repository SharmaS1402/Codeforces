#include <bits/stdc++.h>
using namespace std;
int y;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int> arr(n);
    vector<int> diff(n);
    int moves=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1) cout<<0<<endl;
    else{
    for(int i=0;i<n-1;i++){
        diff[i]=abs(arr[i+1]-arr[i]);
    }
    // for(auto ele : diff)  cout<<ele<<" ";
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            arr[i]=arr[i+1];
            if(diff[i]<=arr[i+1]){
            if(i==0) y=1;
            else y=arr[i-1]-diff[i]+1;
            } 
            else{
                y=diff[i]-arr[i+1]+1;
            }
            if(y>=0) moves+=y;
            else moves+=1;
        }
    }
    cout<<moves<<endl;
    }

}
return 0;
}