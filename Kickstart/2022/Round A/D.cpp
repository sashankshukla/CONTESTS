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

int main(){
ios::sync_with_stdio(0);cin.tie(0);
int t; cin >> t;
for(int i=0; i<t;++i){
   ll a,b ; cin >> a >> b;
   int cnt=0;
   for(ll i=a;i<=b;++i){
       string s= to_string(i);
       ll sum=0; ll product=1;
       for(char ch : s){
           int digit = ch - '0';
           sum+=(ll)digit;
           product*=(ll)digit;
       }
       if(product%sum == 0)
         ++cnt;
   }
   print(i ,cnt);
}
}