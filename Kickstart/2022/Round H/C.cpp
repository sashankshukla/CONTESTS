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
map<int,int> memo;
int cnt = 0;

void dfs(int start,vector<int> adj[]){
    if(memo[start]){
        cnt+= memo[start];
        return;
    }
    ++cnt;
    for(auto u : adj[start]){
        int curr = mp[start],next = mp[u];
        if(next < curr){
           dfs(u,adj);
        }
    }
    memo[start] = cnt;
    return;
}

void solve(){
  int n; cin >> n;
  vector<int> adj[n];
  for(int i=0;i<n;++i){
     int a; cin >> a;
     mp[i] = a; 
  }
  for(int i=0;i<n-1;++i){
     int x,y; cin >> x >> y;
     --x; --y;
     adj[x].push_back(y);
     adj[y].push_back(x);
  }

  int res = 0;
  for(int i=0;i<n;++i){
      dfs(i,adj);
      res = max(cnt,res);
      cnt = 0;
  }
  cout << res << line();
  mp.clear();
  cnt = 0;
}

int main(){
 ios::sync_with_stdio(0); cin.tie(0);
 int T; cin >> T;
 FOR(T){
  cout << "Case #" << t+1 << ": ";
  solve();
 }
}