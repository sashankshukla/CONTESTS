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
  ll r,a,b; cin >> r >> a >> b;
  ll ans = 0;
  int cnt=0;
  ll newr = r;
  ans += (newr*newr);
  while(newr != 0){
      if(cnt == 0)
       newr= newr*a;
      else
       newr = newr/b;
      if(cnt == 0)
       cnt = 1;
      else
       cnt  = 0;
     ans += (newr*newr);
  }  
  cout << "Case #" << i+1 << ": " << fixed << setprecision(6) << ans*M_PI << "\n";
 }
}
