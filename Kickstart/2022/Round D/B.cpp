#include <bits/stdc++.h>
using namespace std;
int dRow[] = { -1, 0, 1, 0 }, dCol[] = { 0, 1, 0, -1 };//direction vectors
typedef long  long  ll;
#define MOD 1000000007
#define pb  push_back
#define FOR(a)     for(int i=0;i<a;++i)
#define sort(v)    sort(v.begin(),v.end());
#define reverse(v) reverse(v.begin(),v.end());
#define print(i,s) cout << "Case #" << i+1 << ": " << s << "\n";
#define line()   "\n"


int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  int t; cin >> t;
  for(int i=0;i<t;++i){
    int n; cin >> n; vector<int> a(n);
    int p1[n]; int s1[n];
    for(int j=0;j<n;++j){
      cin >> a[j];
    }
    for(int j=0;j<n;++j){
       if(j == 0)
          p1[j] = a[j];
       else
         p1[j] = p1[j-1] + a[j];
    }
    for(int j=n-1;j>=0;--j){
        if(j == n-1)
         s1[j] = a[j];
        else
         s1[j] = s1[j+1] + a[j];
    }
    int m; cin >> m; vector<int> b(n);
    int p2[m]; int s2[m];
    for(int j=0;j<m;++j){
      cin >> b[j];
    }
    for(int j=0;j<m;++j){
      if(j == 0)
        p2[j] = b[j];
      else
        p2[j] = p2[j-1] + b[j];
    }
    for(int j=m-1;j>=0;--j){
      if(j == m-1)
        s2[j] = b[j];
      else
        s2[j] = s2[j+1] + b[j];
    }
    int k; cin >> k;
    ll res = 0;
    ll dp1[n]; ll dp2[m];
    
  }
}
