#include <bits/stdc++.h>
using namespace std;
vector<int> adj[100];
bool visited[100];
queue<int> q;
void bfs(int x){
    visited[x]=true;
    q.push(x);
    while(!q.empty()){
        int s=q.front();
        q.pop();
    for(auto u : adj[s]){
        if(visited[s]) continue;
        visited[s]=true;
        q.push(u);
    }
    }
}
int main(){

return 0;
}