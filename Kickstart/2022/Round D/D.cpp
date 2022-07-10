#include <bits/stdc++.h>
using namespace std;
int dRow[] = { -1, 0, 1, 0 }, dCol[] = { 0, 1, 0, -1 };//direction vectors
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
    int n,m,k; cin >> n >> m >> k;
    int res =0;
    map<int,vector<int>> mp;
    for(int j=0;j<m;++j){
      int x,y; cin >> x >> y;
      mp[y].push_back(x);
    }
    for(int j=1;j<=n;++j){
       if(mp[j].size()!=0)
        ++res;
    }
    print(i,res);
    
  }
}
