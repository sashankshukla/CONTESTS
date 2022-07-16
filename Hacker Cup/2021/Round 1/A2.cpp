#include <bits/stdc++.h>
using namespace std;
int dRow[] = { -1, 0, 1, 0 }, dCol[] = { 0, 1, 0, -1 };//direction vectors
typedef long  long  ll;
const ll MOD = 1000000007;
#define PI acos(-1)
#define FOR(a)     for(int it=0;it<a;++it)
#define print(i,s) cout << "Case #" << i+1 << ": " << s << "\n";
#define write(i,s) myfile << "Case #" << i+1 << ": " << s << "\n";
#define line() "\n" 
ofstream myfile;
#define f_init()  myfile.open("output.txt"); cout << "f_init" << line();
#define f_close() myfile.close(); cout << "f_close" << line();


ll calc(string s){
    ll total = 0;
    ll res = 0;
    bool picked = false;
    bool hand; // false for left, true for right
    string temp = "";
    for(char ch : s){
        temp += ch ;
        if(ch == 'X' && !picked){
            picked = true;
            hand = false;
        }
        else if(ch == 'O' && !picked){
            picked = true;
            hand = true;
        }
        else if(ch == 'O' && !hand){
            ++res;
            hand = true;
        }
        else if(ch == 'X' && hand){
            ++res;
            hand = false;
        }
        total += res;
    }
    return total;
}     
 
int main(){
  ios::sync_with_stdio(0);cin.tie(0); f_init();
  int t; cin >> t;
  FOR(t){
    int n; cin >> n;
    ll res = 0;
    string s; cin >> s;
    for(int i=0;i<s.size();++i){
        res+= calc(s.substr(i,n-i))%MOD;  
    }
    write(it,res);
  }
  f_close();
}