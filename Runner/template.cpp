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
  vector<vector<int>> v = {{1,2,3,4,5},
                         {6,7,8,9,10},
                         {11,12,13,14,15}};
                         
  for(int i=0;i<v[0].size();++i){
    for(int j=0;j<v.size();++j){
       cout << v[i][j] <<  " ";
    }
    cout << line();
  }
}
