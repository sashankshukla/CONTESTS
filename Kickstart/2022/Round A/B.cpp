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
int t; cin >> t;
for(int i=0; i<t;++i){
   string s; cin >> s;
   int sum = 0;
   for(char ch :s){
       sum+= (ch - '0');
   }
   int digit_to_add = (9 - (sum % 9) == 9) ? 0 : (9 - (sum % 9));
   string d = to_string(digit_to_add);
   string ans = s+"9";
   for(int i=0;i<=s.size();++i){
       if(i==0 && digit_to_add == 0)
         continue;
       string temp = s;
       temp.insert(i , d);
       if(temp.compare(ans) <= 0){
           ans = temp;
         }
   }
    print(i,ans);
 } 
}