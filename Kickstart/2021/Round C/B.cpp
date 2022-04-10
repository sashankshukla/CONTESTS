#include <bits/stdc++.h>
using namespace std; typedef  long  long  ll; typedef vector<int> vi; typedef set<int> si;
#define FOR(a)  for(int i=0;i<a;++i)
#define add(a) v.push_back(a);
#define sort(v) sort(v.begin(),v.end());
#define print(i,s) cout << "Case #" << i+1 << ": " << s << "\n";

int main(){
ios::sync_with_stdio(0);cin.tie(0); int t; cin >> t;
FOR(t){
	ll g; cin >> g; int cnt=0;
	for(ll j=1;j*j<=g;++j){
        if(g%j==0){
            if(j!=g/j){
                if(j%2==1)
                    ++cnt;
                if(g/j%2==1)
                    ++cnt;
            }
            else{
                if(j%2==1)
                    ++cnt;
            }
        }
	}
      print(i,cnt);
  }
}
