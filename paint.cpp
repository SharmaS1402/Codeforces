#include <bits/stdc++.h>
using namespace std;
int ele;
int num[2];
vector<int> arr(100005,0);
bool solve(int n){
    int count=0;
    for(int i=0;i<n;i++){
        cin>>ele;
        if(arr[ele]==0){ num[count++]=ele;}
        arr[ele]++;
    }
    if(count==1) return true;
    if(count>2)  return false;
    if((n%2==0)&&(arr[num[0]]==arr[num[1]])) return true;
    if((n%2!=0)&&(abs(arr[num[0]]-arr[num[1]]==1))) return true;
    return false;

}
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    if(solve(n)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    arr.clear();
}
return 0;
}