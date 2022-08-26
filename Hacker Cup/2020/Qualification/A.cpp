#include <bits/stdc++.h>
using namespace std;
int dRow[] = { -1, 0, 1, 0 }, dCol[] = { 0, 1, 0, -1 };//direction vectors
typedef long  long  ll;
const ll  MOD = 1000000007;
#define PI acos(-1)
#define FOR(a)     for(int it=0;it<a;++it)
#define print(i,s) cout << "Case #" << i+1 << ": " << s << "\n";
#define line() "\n" 
                  
template <typename T>
T output_vector(vector<T> v) { cout << " [ " << " " ; for(auto val : v) cout << val << " , " ; cout << "]" << " " << line() ; }
 
 
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  int t; cin >> t;
  FOR(t){
      int n; cin >> n;
      vector<bool> inbound(n),outbound(n);
      string a,b; cin >> a >> b;
      for(int i=0;i<n;++i){
         inbound[i] = a[i] == 'Y';
         outbound[i] = b[i] == 'Y';
      }
      vector<vector<char>> res(n,vector<char>(n,'N'));
      for(int i=0;i<n;++i){
         int l = i,r=i;
         while(l >= 0){
             if(l == i){
               res[i][l] = 'Y';
             }
             else if(inbound[l] && outbound[l+1])
                res[i][l] = 'Y';
             else
                break;
              --l;
         }
         while(r < n){
             if(r == i){
               res[i][r] = 'Y';
             }
             else if(inbound[r] && outbound[r-1])
                res[i][r] = 'Y';
             else
                break;
             ++r;
         }
      }
      cout << "Case #" << it+1 << ": " <<  "\n";
      for(auto v : res){
        for(auto ch : v)
          cout << ch;
        cout << line();
      }
  }
}