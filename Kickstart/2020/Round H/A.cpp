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

template <typename T>
T output_vector(vector<T> v) { for(auto val : v) cout << val << " "; cout << line();}
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}

#ifndef DEBUG
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif


vector<ll> b(26);


bool boring(ll n){
    string s= to_string(n);
    for(int i=0;i<s.size();++i){
        if(i%2 == (s[i]-'0')%2)
          return false;
    }
    return true;
}


void solve(){
   ll l,r; cin >> l >> r;
   for(ll i=1;i<=25;++i){
       bool chk = boring(i);
       if(i == 1)
         b[i] = chk;
       else{
         if(chk)
           b[i] = 1+b[i-1];
           else
           b[i] = b[i-1];
       }
   }
   cout << b[r] - b[l-1] << line();
}

int main(){
 ios::sync_with_stdio(0); cin.tie(0);
 int T; cin >> T;
 FOR(T){
  cout << "Case #" << t+1 << ": ";
  solve();
 }
}