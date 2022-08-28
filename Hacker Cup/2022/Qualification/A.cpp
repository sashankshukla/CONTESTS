#include <bits/stdc++.h>
using namespace std;
int dRow[] = { -1, 0, 1, 0 }, dCol[] = { 0, 1, 0, -1 };//direction vectors
typedef long  long  ll;
const ll  MOD = 1000000007;
#define PI acos(-1)
#define FOR(a)     for(int T=0;T<a;++T)
#define print(i,s) cout << "Case #" << i+1 << ": " << s << "\n";
#define line() "\n" 
#define GET_VARIABLE_NAME(Variable) (#Variable)
                  
template <typename T>
T output_vector(vector<T> vector) { cout << GET_VARIABLE_NAME(vector) << ": ["; for(auto val : vector) cout << val << " " ; cout << "]" << line() ; }
 
 
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  int t; cin >> t;
  FOR(t){
     int n,k; cin >> n >> k;
     map<int,int> mp;
     for(int i=0;i<n;++i){
         int val ; cin >> val;
         mp[val]++;
     }
     bool res = true;
     for(auto p : mp){
       if(p.second > 2){
         res = false;
         break;
       }
     }
     if(!res){
       print(T,"NO");
     }
     else{
       if(n <= 2*k){
         print(T,"YES");
       }
       else 
         print(T,"NO");
     }
  }
}