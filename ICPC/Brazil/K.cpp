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
int t,d,m; cin >> t >> d >> m;
vector<int> meals;
meals.push_back(0);
for(int i=0;i<m;++i){
    int val; cin >> val;
    meals.push_back(val);
}
meals.push_back(d);
bool chk = false;
if(meals.size()==1){
    if(t <= d)
      chk=true;
}
else{
for(int i=0;i<m+1;++i){
    if(meals[i+1]-meals[i] >= t){
        chk = true;
        break;
    }
 }
}
chk ? cout << "Y" : cout << "N";
}