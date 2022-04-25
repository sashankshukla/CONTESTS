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
    int prev=0;
    for(int j=0;j<n;++j){
        for(int k=0;k<p-2;++k){
            res+=(ll)v[j][k]-prev;
            prev = v[j][k];
            cout << res << line();
        }
        int second_last = v[j][p-2],last = v[j][p-1];
        if(j == n-1){
            res += abs((ll)second_last-prev);
            cout << res << line();
            res += abs((ll)last - second_last);
            cout << res << line();
        }
        if(j != n-1 && abs(second_last-v[j+1][0]) <= abs(last-v[j+1][0])){
        res += abs((ll)last-prev);
        cout << res << line();
        prev = last;
        res += abs((ll)second_last-prev);
        cout << res << line();
        prev= second_last;
        }
        else{
            res += abs((ll)second_last-prev);
            cout << res << line();
            prev = second_last;
            res += abs((ll)last-prev);
            cout << res << line();
            prev= last;
        }
    }
    print(i,res);
 }
}