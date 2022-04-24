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
#define line()     "\n"

bool is_palindrome(int val){
    string s = to_string(val);
    if(s.size() == 1)
      return true;
    else{
      for(int i=0;i<s.size()/2;++i){
          if(s[i] != s[s.size() - i -1])
            return false;
      }
      return true;
    }
}
int main(){
ios::sync_with_stdio(0);cin.tie(0);
int t; cin >> t;
for(int i=0;i<t;++i){
    int n ; cin >> n;
    vector<int> factors;
    int res = 0;
    for(int i=1;(i*i)<=n;++i){
       if(n%i == 0)
         factors.push_back(i);
       if(n%i==0 && (n/i != i))
         factors.push_back(n/i);
    }
    for(int val : factors){
        if(val <=9){
            ++res;
            continue;
        }
        if(is_palindrome(val))
        ++res;
    }
    print(i,res);
  }
}
