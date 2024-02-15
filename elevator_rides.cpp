#include <bits/stdc++.h>
using namespace std;
int main(){
int n,x;
cin>>n>>x;
vector<int> weight(n);
for(int i=0;i<n;i++){
    cin>>weight[i];
}
pair<int,int> best[1<<n];
best[0]={1,0};
for(int s=1;s<(1<<n);s++){
    best[s]={n+1,0};
    for(int p=0;p<n;p++){
        if(s&(1<<p)){
            auto option=best[s^(1<<p)];
            if(option.second + weight[p] <=x){
                option.second+=weight[p];
            }
            else{
                option.first++;
                option.second=weight[p];
            }
            best[s]=min(best[s],option);
        }
    }
}
cout<<best[(1<<n) -1].first<<endl;

return 0;
}