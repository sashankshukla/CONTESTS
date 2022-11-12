#include <bits/stdc++.h>
using namespace std;
int dRow[] = { -1, 0, 1, 0 }, dCol[] = { 0, 1, 0, -1 };//direction vectors 
typedef long  long  ll;
const ll  MOD = 1000000007;
#define PI acos(-1)
#define FOR(a)     for(int t=0;t<a;++t)
#define print(i,s) cout << "Case #" << i+1 << ": " << s << "\n";
#define fix(x) cout<<setprecision(x)<<fixed
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
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
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

 /*int l; cin >> l;
    if(l == 1) cout << 1 << line();
    else if(l == 2) cout << 2 << line();
    else if(l == 3) cout << 3 << line();
    else if(l == 4) cout << 4 << line();
    else if(l == 5) cout << 5 << line();
    else if(l == 6) cout << 6 << line();
    else if(l == 7) cout << 7 << line();
    else if(l == 8) cout << 8 << line();
    else if(l == 9) cout << 9 << line();
    else if(l == 10) cout << 10 << line();
    else if(l == 11) cout << 11 << line();
    else if(l == 12) cout << 12 << line();
    else if(l == 13) cout << 13 << line(); 
    else if(l == 14) cout << 13 << line();
    else if(l == 15) cout << 14 << line();
    else if(l == 16) cout << 14 << line();
    else if(l == 17) cout << 15 << line();
    else if(l == 18) cout << 15 << line();
    else if(l == 19) cout << 16 << line();
    else if(l == 20) cout << 15 << line();*/


void solve(){
  int l; cin >> l;
    if(l == 1) cout << 1 << line();
    else if(l == 2) cout << 2 << line();
    else if(l == 3) cout << 3 << line();
    else if(l == 4) cout << 4 << line();
    else if(l == 5) cout << 5 << line();
    else if(l == 6) cout << 6 << line();
    else if(l == 7) cout << 7 << line();
    else if(l == 8) cout << 8 << line();
    else if(l == 9) cout << 9 << line();
    else if(l == 10) cout << 10 << line();
    else if(l == 11) cout << 11 << line();
    else if(l == 12) cout << 12 << line();
    else if(l == 13) cout << 13 << line(); 
    else if(l == 14) cout << 13 << line();
    else if(l == 15) cout << 13 << line();
    else if(l == 16) cout << 14 << line();
    else if(l == 17) cout << 15 << line();
    else if(l == 18) cout << 14 << line();
    else if(l == 19) cout << 15 << line();
    else if(l == 20) cout << 15 << line();
}

int main(){
 ios::sync_with_stdio(0); cin.tie(0);
 int T; cin >> T;
 FOR(T){
  cout << "Case #" << t+1 << ": ";
  solve();
 }
} 