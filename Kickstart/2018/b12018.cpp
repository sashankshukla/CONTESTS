#include <bits/stdc++.h>
using namespace std;
typedef long long ll;typedef vector<ll> vi;typedef set<ll> si;
#define FOR(a) for (int i = 0; i < a; ++i)
#define vadd(a) v.push_back(a);
#define sort(v) sort(v.begin(), v.end());
#define print(i,s) cout << "Case #" << i + 1 << ": " << s << "\n";
#define in(t) cin >> t;
bool solve(ll i){
	ll div=i,rem=0;
	while(div!=0){
		rem=div%(ll)10;
    if(rem==9)
		 return false;
		div=div/(ll)10;
	}
	return true;
}
int main()
{ ios::sync_with_stdio(0);cin.tie(0); int t; in(t);
  FOR(t){
	  ll f,l;in(f);in(l); int cnt=2;
	  for(long i=f+1;i<l;++i){
		  bool b=false;
		  if(i%9==0 || i<=1)
			  continue;
		  else{
			  if(solve(i))
				  ++cnt;
		  }
	  }
	  print(i,cnt);
  }
}
