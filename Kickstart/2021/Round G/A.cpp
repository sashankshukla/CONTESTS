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
    int n,d,c,m; cin >> n >> d >> c >> m;
    string s; cin >> s;
    queue<char> q;
    for(char ch : s){
      q.push(ch);
    }
    while(!q.empty()){
      char ch = q.front();
      q.pop();
      if(ch == 'C'){
        if(c > 0)
          --c;
        else
        break;
      }
      else if(ch == 'D'){
        if(d > 0){
         --d; c+=m;
        }
       else
        break;
      }
    }
    bool chk = true;
    if(!q.empty())
    {
      while(!q.empty()){
        char ch = q.front();
        q.pop();
        if(ch == 'D'){
          chk = false; break;
        }
      }
    }
    if(chk){
     print(i,"YES");
    }
    else
    print(i,"NO");
  }
}
