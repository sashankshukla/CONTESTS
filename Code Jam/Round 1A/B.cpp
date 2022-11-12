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
FOR(t){
    int n; cin >> n;
    vector<ll> s;
    ll sum = 0;
    for(int i=1;i<=n;++i){
        s.push_back((ll)i);
        sum+=(ll)i;
        cout << i << " " ;
    }
    cout << endl;
    for(int i=1;i<=n;++i){
        ll val; cin >> val;
        sum+=val;
        s.push_back(val);
    }
    ll to_find = sum/2;
}
}
