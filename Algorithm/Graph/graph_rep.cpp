#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
     
    //Take an undirected graph as an .....adj matrix..... Space complexity(O(n^2))
    //Pros: Takes O(1) time complexity to check wheter a vertex is connected to another vertex.
    // let n is the number of vertex and m is the number of edge.
    //..................CODE................
    // ll n,m,u,v; cin>>n>>m;
    // vector<vector<ll>> adMat(n,vector<ll> (n,0));//Initializing two dimensional vector with size n,n and value 0.
    // for(int i = 0; i<m; i++){
    //     //Take the pair of edges as an input from user.
    //     cin>>u>>v;
    //     adMat[u][v] = 1; //If the weight is given then also take w and set adMat[u][v]=w;
    //         adMat[v][u] = 1; //Since it is undirected.
    // }
    // for(int i = 0; i<n; i++){
    //     for(int j = 0; j<n; j++){
    //         cout << adMat[i][j] << " ";
    //     }
    //     cout << "\n";
    // }


    //Take graph as an .....adj Llist.....Space complexity O(V+E). Worst case O(V^2)
    //Cons: Takes O(v) time complexity to check wheter a vertex is connected to another vertex.
    
    //..............CODE...........
    ll n,m,u,v; cin>>n>>m;//m is the number of paired edges.
    vector<ll>adList[n];
    for(int i = 0; i<m; i++){
        cin>>u>>v;
        adList[u].push_back(v);
        adList[v].push_back(u);//Undirected graph.
    }
    for(int i = 0; i<n; i++){
        ll size = adList[i].size();
        cout << i << "->";
        for(int j = 0; j<size; j++) cout << adList[i][j] << " ";
        cout << "\n";
    }

    return 0;
}