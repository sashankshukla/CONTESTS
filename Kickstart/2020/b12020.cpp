#include <bits/stdc++.h>
using namespace std; typedef  long  long  ll; typedef vector<int> vi; typedef set<int> si;
#define  FOR(a)  for(int i=0;i<a;++i)
#define print(i,s) cout << "Case #" << i+1 << ": " << s << "\n";
#define in(t) cin>>t;
#define out(t) cout << t << endl;
int solve(){}
int main(){
   ios::sync_with_stdio(0);cin.tie(0); int t,n,val; in(t);
   FOR(t){
    in(n);vi v; int cnt=0;
    FOR(n){
      in(val);v.push_back(val);
    }
    for(int j=1;j<n-1;++j){
      if((v[j]>v[j+1])&&(v[j]>v[j-1]))
        ++cnt;
      }
      print(i,cnt);
   }
}


