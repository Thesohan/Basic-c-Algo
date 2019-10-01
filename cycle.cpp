#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1000000];
bool visited[1000000];
int cycles;
int c;
vector<int> v;

void dfs(int a){
    visited[a]=true;
    if(adj[a].size()!=2){
        c=1;
    }
    for(int i=0;i<adj[a].size();i++){
        if(!visited[adj[a][i]]){
            dfs(adj[a][i]);
        }
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    while(m--){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    
    for(int i=1;i<=n;i++){
        visited[i]=false;
    }
    for(int i=1;i<=n;i++){
        c=0;
        if(visited[i]==false){
            dfs(i);
            if(c==0)
                cycles++;
        }
    }
    cout<<cycles;
}