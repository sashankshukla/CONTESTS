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

long double rec(int r1 , int dir , int a , int b){
    if(r1  == 0)
     return 0;
    if(dir == 0){
     return M_PI*(r1*r1) + rec(r1*a, 1 , a , b);
    }
     return M_PI*(r1*r1) + rec(floor(r1/b), 0 , a , b);
}
int main(){
ios::sync_with_stdio(0);cin.tie(0);
int t; cin >> t;
for(int i=0;i<t;++i){
  int r,a,b; cin >> r >> a >> b;
  long double ans = rec(r,0,a,b);
  print(i,ans);
 }
}
