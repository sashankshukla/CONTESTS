#include <bits/stdc++.h>
using namespace std;
int dRow[] = { -1, 0, 1, 0 }, dCol[] = { 0, 1, 0, -1 };//direction vectors 
typedef long  long  ll;
const ll  MOD = 1000000007;
#define PI acos(-1)
#define FOR(a)     for(int t=0;t<a;++t)
#define print(i,s) cout << "Case #" << i+1 << ": " << s << "\n";
#define fix(x) cout<<setprecision(x)<<fixed
#define line() "\n" 

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template <typename T_vector>
void output_vector(const T_vector &v) { for(auto val : v) cout << val << " "; cout << line();}
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}

#ifndef DEBUG
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif


map<int,int> mp;


void bfs(vector<int> adj[], int x, int n){
    queue<int> q;
    vector<bool> visited(n+1,false);
    vector<int> dist(n+1,0);

    visited[x] = true;
    dist[x] = 0;
    q.push(x);
    while (!q.empty()) {
    int s = q.front(); q.pop();
    // process node s
    for (auto u : adj[s]) {
        if (visited[u]) continue;
        visited[u] = true;
        dist[u] = dist[s]+1;
        q.push(u);
    }
   }
   
   for(int i=1;i<=n;++i){
       mp[dist[i]]++;
   }
}

void solve(){
    int n,q;
    cin >> n >> q;
    vector<int> adj[n+1];
    for(int i=0;i<n-1;++i){
        int p,q; cin >> p >> q;
        adj[p].push_back(q);
        adj[q].push_back(p);
    }
    for(int i=0;i<q;++i){
        int node; cin >> node;
    }
    bfs(adj,1,n);
    int temp = q;
    int result = 0;
    for(auto p : mp){
        if(p.second <= temp){
            result+= p.second;
            temp-=p.second;
        }
        else
        {
            break;
        }
    }
    cout << result << line();
    mp.clear();
}

int main(){
 ios::sync_with_stdio(0); cin.tie(0);
 int T; cin >> T;
 FOR(T){
  cout << "Case #" << t+1 << ": ";
  solve();
 }
}