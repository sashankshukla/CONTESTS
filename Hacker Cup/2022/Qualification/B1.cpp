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
    int r,c; cin >> r >> c;
    int tree_count = 0;
    vector<string> grid(r);
    for(int i=0;i<r;++i){
         cin >> grid[i];
         for(char ch : grid[i])
           tree_count+= ch == '^';
    }
    if(tree_count == 0){
      print(T,"Possible");
      for(string s : grid)
        cout << s << line();
      continue;
    }
    if(r == 1 || c == 1){
      print(T,"Impossible");
      continue;
    }
    print(T,"Possible");
    for(int i=0;i<r;++i){
      string make = "";
      for(int j=0;j<c;++j){
         make+='^';
      }
      cout << make << line();
    }
  }
}