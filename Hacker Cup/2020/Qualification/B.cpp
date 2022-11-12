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
     int n; string s; cin >> n >> s;
     int a=0,b=0;
     for(char ch :s){
        if(ch == 'A')
           ++a;
        else
           ++b;
     }
     int diff = abs(a-b);
     if(diff == 1){
       print(it,"Y");
     }
     else
       print(it,"N");
  }
}