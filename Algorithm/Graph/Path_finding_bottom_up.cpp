//Problem Name: Vertical Path.
// CF 1675D., Technique used, find the leafs first, then climb up to find the path all the way to the root or nearest visted parent.


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
const long long N = 2e5+10;

v64 g[N];
map<ll,int> parent;
bool vis[N];

vector<ll> path(ll x){
    vector<ll> res;
    while(x!=-1 && !vis[x]){
        res.pb(x);
        vis[x] = true;
        x = parent[x];
    }
    reverse(all(res));
    return res;
}

void solve(){
    ll n,m,temp,i,j,rt;
    cin>>n;
    forn(i,n) g[i+1].clear();
    forn(i,n){
        cin>>temp;
        if(i+1==temp) rt = temp;
        else {
            g[temp].pb(i+1);
            parent[i+1] = temp;
        }
    }

    parent[rt] = -1;
    forn(i,n) vis[i+1]=false;
    vector<ll> leafs;
    for(i = 1; i<=n; i++){
        if(g[i].size()==0) leafs.pb(i); //If the size of the adj list item is zero then its a leaf.
    }



    vector<vector<ll>> ans;

    //Bottom up path from all leafs;
    for(i = 0; i<leafs.size(); i++){
        vector<ll> v = path(leafs[i]);
        ans.pb(v);
    }


    cout << leafs.size() << "\n";
    
    for(i = 0; i<ans.size(); i++){
        cout<< ans[i].size() << "\n";
        forn(j,ans[i].size()) cout << ans[i][j] << " ";
        cout << "\n";
    }
    cout << "\n";

}
int main()
{
    fast_cin();
    ll t = 1;
    cin >> t;
    for(int it=1;it<=t;it++) {
        solve();
    }
    return 0;
}
