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


bool isPrime(ll n){
  for(ll i=2;i*i<=n;++i){
      if(n%i == 0)
        return false;
  }
  return true;
}

int main(){
ios::sync_with_stdio(0);cin.tie(0);
int t; cin >> t;
for(int i=0;i<t;++i){
    ll n; cin >> n;
    vector<ll> primes;
    for(ll j=1;j*j<=2*n;j++){
         if(isPrime(j))
           primes.push_back(j);
    }
    bool chk = false;
    for(int j=1;j<primes.size();++j){
        if(primes[j]*primes[j-1]<n){
          continue;
        }
        else if(primes[j]*primes[j-1] == n){
          print(i,n);
          chk = true;
          break;
        }
        else{
            print(i,primes[j-1]*primes[j-2]);
            chk = true;
            break;
        }
    }
    if(!chk)
    print(i,primes[primes.size()-1]*primes[primes.size()-2]);
  }
}
