#include <bits/stdc++.h>
using namespace std;
int dRow[] = { -1, 0, 1, 0 }, dCol[] = { 0, 1, 0, -1 };//direction vectors
typedef long  long  ll;
#define MOD 1000000007
#define PI acos(-1)
#define FOR(a)     for(int it=0;it<a;++it)
// printers/writers
#define print(i,s) cout << "Case #" << i+1 << ": " << s << "\n";  // google 
#define write(i,s) myfile << "Case #" << i+1 << ": " << s << "\n"; // facebook
#define line()   "\n"
// file io
ofstream myfile;
#define f_init()  myfile.open("output.txt"); cout << "f_init" << line();
#define f_close() myfile.close(); cout << "f_close" << line();


int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  int t; cin >> t;
  FOR(t){
    int n; cin >> n; vector<int> a(n);
    for(int i=0;i<n;++i) cin >> a[i];
    int m; cin >> m; vector<int> b(m);
    for(int i=0;i<m;++i) cin >> b[i];
    int k ; cin >> k;
    ll res = 0; ll dp1[n+1]; ll dp2[m+1];


    // for i in (0,n), dp1[i] represents the max score attainable by picking i elements from a
    // for in in (0,m), dp2[i] represents the max score attainable by picking i elements from b

    // calculate max from both dps
    // while i<=n and k-i=<m, find max of dp1[i]+dp[k-i];
    
  }

}
