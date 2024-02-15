#include <bits/stdc++.h>
using namespace std;
int ask(string s, int a , int b){
    cout<<s<<" "<<a<<" "<<b<<endl;
    int res;
    cin>>res;
    fflush(stdout);
    return res;
}
int sum(int a,int b){
    int and_=ask("and",++a,++b);
    int or_=ask("or",a,b);
    int xor_=~and_&or_;
    return 2*and_ + xor_;
}
int main(){
int n,k;
cin>>n>>k;
int a_plus_b=sum(0,1);
int b_plus_c=sum(1,2);
int a_plus_c=sum(0,2);
vector<int> arr;
arr.push_back((a_plus_b + a_plus_c -b_plus_c)/2);
arr.push_back(a_plus_b - arr[0]);
arr.push_back(a_plus_c - arr[0]);

for(int i=3;i<n;i++){
    arr.push_back(sum(i-1,i)-arr.back());
}
sort(arr.begin(),arr.end());
cout<<"finish "<<arr[k-1]<<endl;

return 0;
}