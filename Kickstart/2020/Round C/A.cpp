#include <bits/stdc++.h>
using namespace std;
typedef long long ll;typedef vector<ll> vi;typedef set<ll> si;
#define FOR(a) for (int i = 0; i < a; ++i)
#define vadd(a) v.push_back(a);
#define sort(v) sort(v.begin(), v.end());
#define print(i,s) cout << "Case #" << i + 1 << ": " << s << "\n";
#define in(t) cin >> t;
int main()
{ ios::sync_with_stdio(0);cin.tie(0); int t,n,k,val; in(t);
  FOR(t){
	  in(n);in(k); int cnt=0;vi v;
	  for(int j=0;j<n;++j){
		  in(val);vadd(val);
	  }
	  for(int j=0;j<n-k+1;++j){    
		  int m=k;bool chk=true;
		  for(int x=j;x<k+j;++x){
			  if(v[x]!=m){
				  chk=false; break;}
			  --m;
		  }
		  if(chk==true)
			  ++cnt;
	  }
	  print(i,cnt);
  }
}
