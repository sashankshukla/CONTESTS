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
  double d,x,y,h; cin >> d >> x >> y >> h;
  double angle1 = atan((y-h/2)/x);
  double angle2 = atan(y/x)- angle1;
  double angle3 = atan((y+h/2)/x) - (angle1+angle2);
  double ans = d*(tan(angle3) + tan(angle2));
  cout << fixed;
  cout << setprecision(6) << ans;
}
