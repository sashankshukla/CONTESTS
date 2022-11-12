#include <bits/stdc++.h>
using namespace std;
int dRow[] = { -1, 0, 1, 0 }, dCol[] = { 0, 1, 0, -1 };//direction vectors
const int mxn=1e5; vector<int> adj[mxn]; bool visited[mxn]; int d[mxn];
typedef long  long  ll;
#define MOD 1000000007
#define pb  push_back
#define FOR(a)     for(int i=0;i<a;++i)
#define reverse(v) reverse(v.begin(),v.end());
#define print(i,s) cout << "Case #" << i+1 << ": " << s << "\n";
#define line()     "\n"

int main(){
ios::sync_with_stdio(0);cin.tie(0);
int t; cin >> t;
for(int i=0;i<t;++i){
    int n,p; cin >> n >> p;

    vector<int> v[n];
    for(int j=0;j<n;++j){
        for(int k=0;k<p;++k){
           ll val; cin >> val;
           v[j].push_back(val);
        }
        sort(v[j].begin(),v[j].end());
    }

    ll res = 0;
    ll prev=0;
    for(int j=0;j<n;++j){
       ll maxval=0,minval=0;
       for(int k=0;k<p;++k){
           if(k==0)
             prev = maxval;
           if(v[j][k]>maxval)
             maxval= v[j][k];
           if(v[j][k] < minval)
             minval = v[j][k];
            res += abs(maxval-prev)+ (maxval-minval);
       }
    }
     print(i,res);
 }
}