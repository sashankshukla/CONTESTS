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
  int n,find; cin >> n >> find;
  vector<int> v;
  for(int i=0;i<n;++i)
  {
    int val; cin >> val;
    v.push_back(val);
  }
  sort(v);
  int l=0,r=n-1;
  int sum = -1;
  while(sum != find){
    sum = v[l] + v[r];
    if(sum == find)
      cout << l+1 << " " << r+1;
    else if(sum > find)
      --r;
    else
      ++l;
  }
} 