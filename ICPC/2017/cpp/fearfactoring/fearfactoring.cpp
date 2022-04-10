#include <bits/stdc++.h>
using namespace std;

int dRow[] = { -1, 0, 1, 0 }, dCol[] = { 0, 1, 0, -1 };//direction vectors
const int mxn=1e5; vector<int> adj[mxn]; bool visited[mxn]; int d[mxn];
typedef long  long  ll;
#define MOD 1000000007
#define pb  push_back
#define FOR(a)     for(int i=0;i<a;++i)
//#define sort(v)    sort(v.begin(),v.end());
#define reverse(v) reverse(v.begin(),v.end());
#define print(i,s) cout << "Case #" << i+1 << ": " << s << "\n";
#define line()     "\n"
#define round(n) setprecision(n)

long long factors(ll n){
   ll sum = 0;
	for(ll i=1;i*i<=n;++i){
		if(n%i==0){
            ll o=n/i;
            if(i!=o){
               sum += ((ll)i + (ll)o);
            }
            else
            	sum+=(ll)i;
		}
	}
	return sum;
}

int main(){
   ios::sync_with_stdio(0); cin.tie(0);
   ll l,r; cin >> l >> r;
   ll res = (ll)0;
   for(int i=l;i<=r;++i){
      res += factors(i);
   }
   cout << res;
}
