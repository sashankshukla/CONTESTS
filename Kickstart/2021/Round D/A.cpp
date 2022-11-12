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

int main(){
ios::sync_with_stdio(0);cin.tie(0); int t; cin >> t;
FOR(t){
	int a,b,c,d,e,f,g,h; cin >> a >> b >> c >> d >> e >> f >> g >> h; int cnt=0;
   if((a+c)%2==0 && (a+c)/2==b)
   	++cnt;
   if((a+f)%2==0 && (a+f)/2==d)
   	++cnt;
   if((f+h)%2==0 && (f+h)/2==g)
   	++cnt;
   if((c+h)%2==0 && (c+h)/2==e)
   	++cnt;
   map<int,int> mp;
   if((d+e)%2==0)
   	mp[(d+e)/2]++;
   if((b+g)%2==0)
   	mp[(b+g)/2]++;
   if((a+h)%2==0)
   	mp[(a+h)/2]++;
   if((f+c)%2==0)
   	mp[(f+c)/2]++;
  int mxn=0;
  for(auto u : mp){
  	  mxn=max(mxn,u.second);
  }
  print(i,cnt+mxn);
}
}
