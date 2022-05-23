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
  int n,p,x,y; cin >> n >> p >> x >> y;
  int ans = 0;
  int i=1;
  string s = " "; 
  while(p > 0){
     if(i%n == 0){
         ans+= y;
         s="m";
     }
     else{
         --p;
         ans+=x;
         s="p";
     }
     ++i;
  }
  if(s == "p" && i%n ==0)
    ans+=y;
  cout << ans;
}
