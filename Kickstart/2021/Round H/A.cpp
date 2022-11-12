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
    string s; cin >> s;
    string l; cin >> l;
    int res = 0;
    for(int i=0;i<s.size();++i){
      char ch = s[i];
      int min_diff = 30;
      for(int j=0;j<l.size();++j){
          char curr = l[j];
          int r  = abs(curr-ch);
          int l = 26-abs(ch-curr);
          int minimum = min(r,l);
          min_diff = min(min_diff,minimum);
      }
      res+=min_diff;
    }
    print(i,res);
  }
} 