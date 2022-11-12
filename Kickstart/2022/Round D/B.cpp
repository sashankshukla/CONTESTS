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


void fillDP(int len, vector<ll> a, vector<ll>& dp){
   vector<ll> prefix,suffix;
    prefix.push_back(0); suffix.push_back(0);
    for(int i=0;i<len;++i) prefix.push_back(a[i]+prefix[i]);
    for(int i=len-1,curr=0 ;i>=0;--i,++curr) suffix.push_back(a[i]+suffix[curr]);
    for(int i=0;i<=len;++i){
        ll mxn = 0;
        for(int j=0;j<=i;++j){
            int front = j, back = i-j;
            ll curr = prefix[front] + suffix[back];
            mxn = max(mxn,curr);
        }
        dp[i] = mxn;
    }
}

int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  int t; cin >> t;
  FOR(t){
    int m; cin >> m;  vector<ll> a(m);
    for(int i=0;i<m;++i) cin >> a[i];
    int n; cin >> n;  vector<ll> b(n);
    for(int i=0;i<n;++i) cin >> b[i];
    // dp[i] = max sum by choosing i elements from vector i -> (0,n)
    // dp[i] = sum[f] + sum[l] -> by chosing f from start, l from end, f+m // i total
    vector<ll> dp1(m+1) , dp2(n+1);
    fillDP(m,a,dp1); fillDP(n,b,dp2);
    ll res = 0;
    int k; cin >> k;
    for(int i=0;i<=k;++i){
        if(i <= m && k-i <= n){
           res = max(res,dp1[i]+dp2[k-i]);
        }
    }
    print(it,res);
  }
}