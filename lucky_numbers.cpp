#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int lucky(int n){
    vector<int> v;
    while(n!=0){
        int r=n%10;
        v.push_back(r);
        n=n/10;
    }
    int minn=1e9;
    int maxx=0;
    for(int i=0;i<v.size();++i)
    {
        if(v[i]>maxx) maxx=v[i];
        if(v[i]<minn) minn=v[i];
    }
return maxx-minn;
}
int main(){
    int t;
    cin>>t;
    while(t--){
       int l,r;
       cin>>l>>r;
       if((r-l)<100){
        int maxx=lucky(l);
        int maxxn=l;
        for(int j=l+1;j<=r;j++){
            int x=lucky(j);
            if(maxx<x){
                maxx=x;
                maxxn=j;
            }
        }
        cout<<maxxn<<endl;
       }
       else{
        for(int i=l;i<=l+100;i++){
             vector<int> v;
             int s=i;
    while(s!=0){
        int r=s%10;
        v.push_back(r);
        s=s/10;
    }
    bool a=false;
    bool b=false;
    for(int w=0;w<v.size();w++){
        if(v[w]==9){
            a=1;
        }
        if(v[w]==0){
            b=1;
        }
    }
    if(a==1&&b==1){
        cout<<i<<endl;
        break;
    }

        }
       }
       
    }
return 0;
}