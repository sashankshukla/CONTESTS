#include <bits/stdc++.h>
using namespace std;
int dRow[] = { -1, 0, 1, 0 }, dCol[] = { 0, 1, 0, -1 };//direction vectors
typedef long  long  ll;
const ll  MOD = 1000000007;
#define PI acos(-1)
#define FOR(a)     for(int it=0;it<a;++it)
#define print(i,s) cout << "Case #" << i+1 << ": " << s << "\n";
#define line() "\n" 


int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  int t; cin >> t;
  FOR(t){
    int n; cin >> n; vector<int> toType(n);
    for(int i=0;i<n;++i) cin >> toType[i];
    int m; 
    map<int,vector<int>> mp;
    for(int i=0;i<m;++i){
       int val ; cin >> val;
       mp[val].push_back(i);
    }
  }
}