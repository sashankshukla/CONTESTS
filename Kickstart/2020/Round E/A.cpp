#include <bits/stdc++.h>
using namespace std; typedef  long  long  ll; typedef vector<int> vi; typedef set<int> si;
#define FOR(a)  for(int i=0;i<a;++i)
#define add(a) v.push_back(a);
#define sort(v) sort(v.begin(),v.end());
#define print(i,s) cout << "Case #" << i+1 << ": " << s << "\n";
int main(){
 ios::sync_with_stdio(0);cin.tie(0); int t; cin >> t;
 FOR(t){
   int n,val; cin >> n ; vi v;
   for(int j=0;j<n;++j){
      cin >> val; add(val);
    }
    int d=v[1]-v[0],cnt=2,ans=2;
    for(int j=1;j<n-1;++j){
        if(v[j+1]-v[j]==d)
           ++cnt;
        else{
            cnt=2,d=v[j+1]-v[j];
        }
        ans=max(ans,cnt);
    }
    print(i,ans);
}
}
