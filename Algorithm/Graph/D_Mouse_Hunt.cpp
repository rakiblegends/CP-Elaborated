#include <bits/stdc++.h> 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

//Lesson learned. 
    // 1. Detect cycle in a directed graph.
    // 2. Find all the cycle and its vertexes in a directed graph.
    // 3. Connected Components.



const int N = 2e5+10;
v32 g(N);//Graph, Since it is directed and has only one edge there is no need for 2D vector.
int vis[N];

vector<vector<int>> cycles;//Storing the cycle paths.
vector<int> path;


void dfs(int vertex){
    path.pb(vertex);
    vis[vertex] = 1;
    int to = g[vertex];

    if(vis[to]!=2){ //Not gonna visit this one when dfs for disconnected components.
        if(vis[to]==1){
            cycles.emplace_back();
            //Whenever i visit some vertex that has already been visited,
            //then this path (NOT THE ENTIRE PATH) is the cycle.
            int sz = path.size()-1;
            while(path[sz]!=to){
                cycles.back().pb(path[sz--]);
            }
            cycles.back().pb(to);
            // path.clear();
        }else{
            dfs(to);
        }
    }
    path.pop_back(); //Less time complexity than path.clear();
    vis[vertex] = 2;
}

void solve(){
    ll n,m,ans=0,i,j,u;cin>>n;
    v32 c(n);
    forn(i,n) cin>> c[i];
    forn(i,n){
        cin>>u;
        g[i+1] = u;
    }
    for(i = 1; i<=n; i++){
        if(!vis[i]) dfs(i);
    }

    for(i = 0; i<cycles.size(); i++){
        int mn = c[cycles[i][0]-1];
        for(j = 0; j<cycles[i].size(); j++){
            mn = min(mn, c[cycles[i][j]-1]);
        }
        ans+=mn;
    }
    cout << ans << "\n";
}
int main()
{
    fast_cin();
    ll t = 1;
    // cin >> t;
    for(int it=1;it<=t;it++) {
        solve();
    }
    return 0;
}
