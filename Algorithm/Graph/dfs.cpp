#include<bits/stdc++.h>
using namespace std;
const long long N = 1e5+10;
vector<long long> g[N];
bool vis[N];
void dfs(int vertex){
    //Take action on vertex after entering the vertex.
    cout << vertex << " ";
    vis[vertex] =1;
    for(int child: g[vertex]){
        if(vis[child]) continue; // Or if(!vis[child]) dfs(child);
        //Take action on child before entering the child.
        dfs(child);
        //Take action on child after exiting the child node.
    }
    //Take action on vertex before exiting the vertex.
    // cout << vertex << " ";
}
int main(){
    long long n,m,u,v;
    cin>>n>>m;
    for(int i = 0; i<m; i++){
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);//Undirected
    }
    dfs(0);
    // for(int i = 0; i<n; i++){
    //     cout << i << "-> ";
    //     for(int j = 0; j<g[i].size();j++){
    //         cout << g[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    return 0;
}