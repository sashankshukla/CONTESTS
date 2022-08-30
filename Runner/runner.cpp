#include <bits/stdc++.h>
using namespace std;
int dRow[] = { -1, 0, 1, 0 }, dCol[] = { 0, 1, 0, -1 };//direction vectors 
typedef long  long  ll;
const ll  MOD = 1000000007;
#define PI acos(-1)
#define FOR(a)     for(int t=0;t<a;++t)
#define print(i,s) cout << "Case #" << i+1 << ": " << s << "\n";
#define line() "\n" 

template <typename T>
T output_vector(vector<T> v) { for(auto val : v) cout << val << " "; cout << line();}

void dbg_out() { cerr << endl;}
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {cerr << " " << H; dbg_out(T...);} 
#ifdef SASHANK_DEBUG
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
else
#define dbg(...)
#endif
 

void solve(){
  
}

int main(){
 ios::sync_with_stdio(0);
 #ifndef SASHANK_DEBUG 
 cin.tie(nullptr); 
 #endif
 int T; cin >> T;
 FOR(T){
  cout << "Case #" << t+1 << ": ";
  solve();
 }
}