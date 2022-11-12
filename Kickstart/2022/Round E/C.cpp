#include <bits/stdc++.h>
using namespace std;
int dRow[] = { -1, 0, 1, 0 }, dCol[] = { 0, 1, 0, -1 };//direction vectors 
typedef long  long  ll;
const ll  MOD = 1000000007;
#define PI acos(-1)
#define FOR(a)     for(int t=0;t<a;++t)
#define print(i,s) cout << "Case #" << i+1 << ": " << s << "\n";
#define line() "\n" 

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template <typename T_vector>
void output_vector(const T_vector &v) { for(auto val : v) cout << val << " "; cout << line();}
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.f); cerr << ','; __print(x.s); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}

#ifndef DEBUG
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif



string res = "";
int minLength = 1e9+1;

bool isPalindrome(string s){
   string rev(s.rbegin(),s.rend());
   return s == rev;
}

void factorize(int len ,string s){
    for(int i=1;i*i <= len;++i){
        if(len%i == 0){
            int other = len/i;
            string sub = s.substr(0,i);
            if(isPalindrome(sub) && isPalindrome(s+sub) && sub.size() < minLength){
              res = sub; minLength = sub.size();
            }
            if(i != other){
                sub = s.substr(0,other);
                if(isPalindrome(sub) && isPalindrome(s+sub) && sub.size() < minLength){
                   res = sub; minLength = sub.size();
            }
          }
        }
    }
}

void solve(){
  int n; cin >> n;
  string s; cin >> s;
   int len = (int)s.size();
   factorize(len,s);
   cout << res << line();
   minLength = 1e9+1;
}

int main(){
 ios::sync_with_stdio(0); cin.tie(0);
 int T; cin >> T;
 FOR(T){
  cout << "Case #" << t+1 << ": ";
  solve();
 }
}