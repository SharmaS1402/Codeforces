#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll int points(vector<int> &v,int n){
    ll int count=0;
    ll int scr=0;
    for(int i=0;i<n;i++){
        if(v[i]==0){
            scr+=count;
        }
        else{
            count++;
        }
    }
    return scr;
}
int main(){
int t;
cin>>t;
while(t--){
    ll int n,a;
    cin>>n;
    int min_0=n;
    int max_1=-1;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
        if(a==0){
            min_0=min(min_0,i);
        }
        else{
            max_1=max(max_1,i);
        }
    }
    ll int score=points(v,n);

    if(min_0<n){
    v[min_0]=1;
    score=max(score,points(v,n));
    v[min_0]=0;
    }

    if(max_1>=0){
    v[max_1]=0;
    score=max(score,points(v,n));
    }
    cout<<score<<endl;

}
return 0;
}