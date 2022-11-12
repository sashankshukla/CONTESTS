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
    int maxpancake=0;
    vector<int> p;
    for(int j=0;j<n;++j){
        int val; cin >> val;
        p.push_back(val);
    }
    int res =0;
    int l=0,r=n-1;
    for(int j=0;j<n;++j){
        if(p[l] < p[r]){
            if(p[l] >= maxpancake){
             ++res;
             maxpancake = p[l];
            }
            ++l;
        }
        else{
            if(p[r] >= maxpancake){
                ++res;
                maxpancake = p[r];
             }
             --r;
        }
    }
    print(i,res);
 }
}
