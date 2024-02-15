#include <bits/stdc++.h>
using namespace std;
int a,b;
vector<int> ans(100005);
bool visited[100005];
void bfs(vector<vector<int>>& adj,int s){
    queue<int> q;
    q.push(s);
    visited[s]=true;
    ans[s]=1;
    while(!q.empty()){
        int c=q.front();
        q.pop();
        for(auto u : adj[c]){
            if(!visited[u]){
                visited[u]=true;
                q.push(u);
                (ans[u]=(ans[c]==1?2:1));
            }
        }
    }
}
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
int n,m;
 int o=0;
 int t=0;
cin>>n>>m;
vector<vector<int>> adj(n+1);
for(int i=0;i<m;i++){
    cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
}

bfs(adj,1);
for(int i=1;i<=n;i++){
    if(ans[i]==1){ o++;}
    else if(ans[i]==2) {t++;}
}
for(int i=1;i<=n;i++){
    cout<<ans[i]<<" ";
}cout<<endl;
int k= min(o,t);
cout<<k<<endl;
if(o<t){
    for(int i=1;i<=n;i++){
        if(ans[i]==1){
            cout<<i<<" ";
        }cout<<endl;
    }
}
else{
    for(int i=1;i<=n;i++){
        if(ans[i]==2){
            cout<<i<<" ";
        }cout<<endl;
    }
}
}

return 0;
}