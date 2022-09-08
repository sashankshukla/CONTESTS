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

map<pair<int,int>, int> mp;
int bfs(int x,int y,int n, int m, vector<vector<int>>& grid){
  mp[{x,y}] = 0;
  queue<pair<int,int>> q;
   q.push({x,y});
   grid[x][y] = 1;
   while (!q.empty()) {
   int curr_x = q.front().first, curr_y = q.front().second; q.pop();
   vector<int> dRow = {1,0}, dCol = {0,1};
   for(int i=0;i<4;++i){
       int new_x = curr_x + dRow[i], new_y = curr_y + dCol[i];
       if(new_x < 0 || new_y < 0 || new_x >= n || new_y >=m || grid[new_x][new_y] == 1)
         continue;
       grid[new_x][new_y] = 1;
       q.push({new_x,new_y});
       mp[{new_x,new_y}] = mp[{curr_x,curr_y}] + 1;
   }
   }
   // for(auto p : mp){
   //    cout << p.first.first << " " << p.first.second << "    " << p.second << line(); 
   // }
   if(mp.count({n-1,m-1}))
      return mp[{n-1,m-1}];
   else
      return -1;
}

void solve(){
    int n,m,x,y,d; cin >> n >> m >> x >>y >> d;
    vector<vector<int>> grid(n,vector<int> (m,1));
    --x; --y;
    for(int i=0;i<n;++i){
      for(int j=0;j<m;++j){
          int dist = abs(i-x) + abs(j-y);
          if(dist > d){
             grid[i][j] = 0;
          }
      }
    }
    cout << bfs(0,0,n,m,grid) << line();
    mp.clear();
}

int main(){
 ios::sync_with_stdio(0); cin.tie(0);
 int T; cin >> T;
 FOR(T){
  solve();
 }
}