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

vector<int> v;

void longestincreasingsub(){
    vector<int> dp(v.size());
    int mxn=1;
    fill(dp.begin(), dp.end(), 1);
    for(int i = v.size()-1;i>=0; --i){
        for(int j=i+1;j<v.size();++j){
            if(v[i]<v[j])
               dp[i]=max(dp[i],1+dp[j]);
            mxn = max(mxn,dp[i]);
        }
    }
}

int main(){
   ios::sync_with_stdio(0); cin.tie(0);
   int t; cin >> t;
   FOR(t){
       int val; cin >> val;
       v.pb(val);
   }
   longestincreasingsub();
}