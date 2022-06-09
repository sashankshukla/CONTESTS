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

  

vector<string> perms;   
void permute(string a, int l, int r){
  if(l == r)
    perms.push_back(a);
  else
   for(int i=l;i<=r;++i){
     swap(a[l],a[i]);
     permute(a,l+1,r);
     swap(a[l],a[i]);
   }
}


int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  string s; cin >> s;
  permute(s,0,s.size()-1);
} 