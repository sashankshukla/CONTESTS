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
      int n; cin >> n;
      string s; cin >> s;
      bool upper=false,lower=false,special=false,digit=false;
      for(char ch : s){
          if(isupper(ch))
            upper = true;
          else if(islower(ch))
            lower = true;
          else if(isdigit(ch))
            digit = true;
          else if(ch == '*' || ch == '&' || ch == '@' || ch =='#')
            special = true;
      }
      if(!upper)
       s+='A';
      if(!lower)
       s+='a';
      if(!special)
       s+='#';
      if(!digit)
       s+='9';
      if(s.size() < 7){
          while(s.size() < 7)
           s+='a';
      }
      print(i,s);
  }
}
