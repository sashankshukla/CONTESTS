#include <bits/stdc++.h>
using namespace std;
int dRow[] = { -1, 0, 1, 0 }, dCol[] = { 0, 1, 0, -1 };//direction vectors
const int mxn=1e5; vector<int> adj[mxn]; bool visited[mxn]; int d[mxn];
typedef long  long  ll;
#define MOD 1000000007
#define pb  push_back
#define FOR(a)     for(int i=0;i<a;++i)
#define sort(v)    sort(v.begin(),v.end());
#define reverse(v) reverse(v.begin(),v.end());
#define print(i,s) cout << "Case #" << i+1 << ": " << s << "\n";
#define line()   "\n"

int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  int t; cin >> t;
  for(int i=0;i<t;++i){
    int n; cin >> n;
    map<int,ll> mp;
    for(int x=0;x<n;++x){
      for(int y=0;y<n;++y){
        int val; cin >> val;
        mp[x-y]+=val;
      }
    }
    ll res = -1;
    for(pair<int,ll> p: mp){
      if(p.second > res)
        res = p.second;
    }
    print(i,res);
  }
}
