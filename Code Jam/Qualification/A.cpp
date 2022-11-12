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
for(int i=0;i<t;++i){
    int r,c; cin >> r >> c;
    print(i , "");
    string divider = "";
    for(int j=0;j<c;++j){
        (j!=c-1)? divider+="+-" : divider+="+";
    }
    cout << ".." << divider << line() << "..";
    for(int j=0;j<c-1;++j){
        cout << "|.";
    }
    divider+="-+";
    cout << "|" << line() << divider << line();
    for(int j=0;j<r-1;++j){
        for(int k=0;k<c;++k){
            cout << "|.";
        }
        cout << "|" << line();
        cout << divider << line();
    }
 }
}