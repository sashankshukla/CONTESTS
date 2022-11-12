#include <bits/stdc++.h>
using namespace std;

int dRow[] = { -1, 0, 1, 0 }, dCol[] = { 0, 1, 0, -1 };//direction vectors
const int mxn=1e5; vector<int> adj[mxn]; bool visited[mxn]; int d[mxn];
typedef long  long  ll;
#define MOD 1000000007
#define pb  push_back
#define FOR(a)     for(int i=0;i<a;++i)
//#define sort(v)    sort(v.begin(),v.end());
#define reverse(v) reverse(v.begin(),v.end());
#define print(i,s) cout << "Case #" << i+1 << ": " << s << "\n";
#define line()     "\n"
#define round(n) setprecision(n)

int main(){
   ios::sync_with_stdio(0); cin.tie(0);
   int t; cin >> t;
   FOR(t){
      int v; cin >> v;
      map<int,int> mp;
      int ans=1001,freq=0;
      FOR(v){
         int val; cin >> val;
         ++mp[val];
         if(mp[val] > freq){
             ans = val;
             freq = mp[val];
         }
         if(mp[val] == freq && val < ans)
            ans = val;
      }
      cout << ans << line();
   }
}
