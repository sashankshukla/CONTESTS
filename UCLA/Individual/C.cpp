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
  int n,m,p; cin >> n >> m >> p;
  bool chk = true;
  int temp = n;
  vector<int> d;
  for(int i=0;i<m;++i){
      int val; cin >> val;
      d.push_back(val);
  }

  for(auto damage : d){
      if(damage >= temp){
          chk = false;
          break;
      }
      if(damage >= n && n < temp){
         while(p>0 && n<temp){
             --p;
             n = min(temp,n+20);
         }
         if(n <= damage){
             chk= false; break;
         }
         else{
             n-= damage;
         }
      }
      else{
         n-=damage;
      }
  }
  if(chk)
   cout << "champion";
  else
   cout << "next time";
}
