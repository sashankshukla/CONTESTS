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
#define line()     "\n"


int main(){
ios::sync_with_stdio(0);cin.tie(0);
int t; cin >> t;
for(int i=0;i<t;++i){
   const double pi = acos(-1);
    ll r, a, b;
    cin >> r >> a >> b;
    int cur = 0;
    ll ans = 0;
    while(r > 0) {
    	ans += r * r;
    	if(cur) {
    		r /= b;
    	}
    	else {
    		r *= a;
    	}
    	cur ^= 1;
    }
    cout << "Case #" << i+1 << ": " << fixed << setprecision(6) << pi * ans << "\n";
  }
}
