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
    long long n ; cin >> n;
    int res = 0;
    for(ll i=1;((ll)i*(ll)i)<=n;++i){
        if(n%i==0){
            int o = n/i;
            if(i!=o){
                if(is_palindrome(i))
                 ++res;
                if(is_palindrome(o))
                 ++res;
            }
            else{
                if(is_palindrome(i))
                ++res;
            }
        }
    }
    print(i,res);
  }
}
