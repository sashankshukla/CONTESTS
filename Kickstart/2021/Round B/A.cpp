#include <bits/stdc++.h>
using namespace std;
int dRow[] = { -1, 0, 1, 0 }, dCol[] = { 0, 1, 0, -1 };//direction vectors
const int mxn=1e5; vector<int> adj[mxn]; bool visited[mxn]; int d[mxn];
typedef long  long  ll;
#define MOD 1000000007
#define pb  push_back
#define FOR(a)     for(int i=0;i<a;++i)
#define sort(v)    sort(v.begin(),v.end());
#define reverse(v) reverse(v.begin(),v.end());
#define print(i,s) cout << "Case #" << i+1 << ": " << s << "\n";
#define line()     "\n"

int main(){
ios::sync_with_stdio(0);cin.tie(0);
int t; cin >> t;
FOR(t){
    int n; cin >> n;
    string s; cin >> s;
    cout << "Case #" << i+1 << ": ";
    int res = 1;
    cout << res << " " ;
    for(int j=1;j<n;++j){
        if(s[j] > s[j-1])
           ++res;
        else{
            res = 1;
        }
        cout << res << " ";
    }
    cout << line();
 }
}