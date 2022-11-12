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
    int n; cin >> n;
    string s; cin >> s;
    ll res = 0;
    bool picked = false;
    bool hand; // false is left, true is right
    for(char ch : s){
        if(ch == 'F')
          continue;
        else if(ch == 'X' && !picked){
            picked = true;
            hand = false;
        }
        else if(ch == 'O' && !picked){
            picked = true;
            hand = true;
        }
        else if(ch == 'O' && hand)
         continue;
        else if(ch == 'X' && !hand)
         continue;
        else if(ch == 'O' && !hand){
            ++res;
            hand = true;
        }
        else if(ch == 'X' && hand){
            ++res;
            hand = false;
        }
    }
    print(it,res);
  }
}
