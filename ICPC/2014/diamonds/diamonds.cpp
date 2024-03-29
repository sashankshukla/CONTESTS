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
   int n; cin >> n; double a[n]; double b[n]; int dp[n];
   for(int i=0;i<n;++i){
      dp[i] =1;
   }
   for(int i=0;i<n;++i){
       cin >> a[i] >> b[i];
   }
   int res=1;
   for(int i=n-1;i>=0;--i){
      for(int j=i+1;j<n;++j){
         if((a[i] < a[j]) && (b[i] > b[j])){
            dp[i] = max(dp[i] , 1+dp[j]);
            res = max(res , dp[i]);
         }
      }
   }
   cout << res << line();
   }
}
