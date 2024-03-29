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

void solve(){
   ll r,a,b; cin >> r >> a >> b;
   ll area = (r*r);
   while(r > 0){
       r*=a;
       area += r*r;
       r/=b;
       area += r*r;
   }
   long double PI = atan(1)*4;
   cout << fixed << setprecision(6) << area*PI << "\n";
}

int main(){
ios::sync_with_stdio(0);cin.tie(0);
int t; cin >> t;
FOR(t){
    cout << "Case #" << i+1 << ": ";
    solve();
}
}
