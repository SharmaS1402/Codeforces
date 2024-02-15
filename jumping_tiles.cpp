#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    int n=s.length();
    char first=s[0];
    char end=s[n-1];
    int m=0;
    vector<pair<char,int>> v;
           if(first<=end){
        for(int i=0;i<n;i++){
            if(s[i]>=first && s[i]<=end){
                v.push_back(make_pair(s[i],i+1));
                m++;
            }
        }
           }
        else  {
            for(int i=0;i<n;i++){
            if(s[i]<=first && s[i]>=end){
                v.push_back(make_pair(s[i],i+1));
                m++;
            }
        }
        }
    sort(v.begin(),v.end());


    cout<<abs(first-end)<<" "<<m<<endl;
    if(first<=end){
          if(v[0].second!=1){
            for(int i=1;i<m;i++){
                if(v[i].second==1){
                    swap(v[i],v[0]);
                    break;
                }
            }
        }
        if(v[m-1].second!=n){
            for(int i=m-2;i>=0;i--){
                if(v[i].second==n){
                    swap(v[i],v[m-1]);
                    break;
                }
            }
        }
    for(int i=0;i<m;i++){
        cout<<v[i].second<<" ";
    }cout<<endl;
}
   else if(first>end){
      if(v[m-1].second!=1){
            for(int i=m-2;i>=0;i--){
                if(v[i].second==1){
                    swap(v[i],v[m-1]);
                    break;
                }
            }
        }
        if(v[0].second!=n){
            for(int i=0;i<m;i++){
                if(v[i].second==n){
                    swap(v[i],v[0]);
                    break;
                }
            }
        }
    for(int i=m-1;i>=0;i--){
        cout<<v[i].second<<" ";
   }cout<<endl;
    }
}
return 0;
}