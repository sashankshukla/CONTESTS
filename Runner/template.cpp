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
  int n; cin >> n;
  vector<ll> v(n);
  for(int i=0;i<n;++i) cin >> v[i];
  for(int i=0;i<v.size();++i){
      if(v[i]%32768 == 0){
        cout << 0 << endl;
        continue;
      }
      for(int k=0;k<=15;++k){
         
      }
  }
}
