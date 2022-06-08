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
    int w,n; cin >> w >> n;
    vector<int> v;
    for(int j=0;j<w;++j){
      int val; cin >> val;
      v.push_back(val);
    }
    sort(v);
    ll ans = (ll)1e18;
    for(int j=0;j<w;++j){
       int best = v[j];
       ll res = 0;
       for(int val : v){
       int a,b; 
       if(val <= best){
         a = best-val;
         b = n-best+val;
        }
        else{
         a = val-best;
         b = n+best-val;
        }
       res+=(ll)min(a,b);
     }
     ans = min(ans,res);
    }
    print(i,ans);
  }
}
