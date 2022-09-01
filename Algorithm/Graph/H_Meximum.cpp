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





const ll N = 2e5+10;
vector<ll> score(1);
vector<ll> freq(N);
vector<ll> g[N];//Tree
ll  ans = 0;
void dfs(ll vertex,ll par,ll mex){
    if(score[vertex]<N) freq[score[vertex]]++;
    //Searching for new mex.
    for(ll i = mex;;i++){
        if(!freq[i]){
            mex = i;
            break;
        }
    }
    // cout << mex << " ";
    ans = max(ans,mex);
    for(ll child: g[vertex]){
        if(child!=par) dfs(child,vertex,mex);
    }
    if(score[vertex]<N) freq[score[vertex]]--;
}

void solve(){
    ll n,m,temp,i,j,u,v; 
    cin>>n;
    for(i=0;i<n;i++){
        cin>>temp;
        //Storing score
        score.pb(temp);
    }
    for(i = 0; i<n-1; i++){
        cin>>u>>v;
        g[u].pb(v);
        g[v].pb(u);
    }
    dfs(1,0,0);//Initialize mex with 0.
    cout << ans << "\n";
}
int main()
{
    fast_cin();
    ll t = 1;
    for(int it=1;it<=t;it++) {
        solve();
    }
    return 0;
}
