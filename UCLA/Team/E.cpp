#include <bits/stdc++.h>
using namespace std;
int dRow[] = { -1, 0, 1, 0 }, dCol[] = { 0, 1, 0, -1 };//direction vectors
const int mxn=1e5; vector<int> adj[mxn]; bool visited[mxn]; int d[mxn];
typedef long  long  ll;
#define MOD 1000000007
#define pb  push_back
#define FOR(a)     for(int i=0;i<a;++i)
#define reverse(v) reverse(v.begin(),v.end());
#define print(i,s) cout << "Case #" << i+1 << ": " << s << "\n";
#define line()   "\n"


int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  set<char> s;
  vector<string> tests = {"abcde", "fghij" , "klmno" , "pqrst", "uvwxy"};
  string response;
  for(int i=0;i<5;++i){
      cout << "? " <<  tests[i] << line();
      cout.flush();
      cin >> response;
      if(response == "22222")
        exit(0);
      for(int j=0;j<response.size();++j){
          if(response[j] == '1' || response[j] =='2')
            s.insert(tests[i][j]);
      }
  }
  if(s.size() != 5)
    s.insert('z');
  
   string res ="";
   for(char ch : s){
      res+=ch;
   }
   map<char,int> mp;

   for(int i=0;i<4;++i){
   cout << "? " << res << line();
   cout.flush();
   cin >> response;
   if(response == "22222")
     exit(0);
   for(int i=0;i<4;++i){
       if(response[i] == '2')
         mp[res[i]] = i;
   }
    res = res[4] + res.substr(0,4);
   }

    string f="aaaaa";
    for(pair<char,int> p : mp){
         f[p.second] = p.first;
    }
    cout << "? " << f << line();
    cout.flush();
}