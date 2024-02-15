#include<iostream>
#include<vector>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
vector<int> v(a,a+n);
for(int i=0;i<n;i++){
    if(a[i]>0){
        for(int j=0;j<a[i];j++){
             for(int k=i+1;k<n;k++){
                if(a[k]==-1){
                    v.erase(v.begin()+k);
                    break;
                }
                
            }
            

        }
    }
}
int neg=0;
for(int i=0;i<v.size();i++){
    if(v[i]==-1){
        neg++;
    }
}
cout<<neg<<endl;
return 0;
}