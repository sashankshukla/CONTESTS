#include <bits/stdc++.h>
using namespace std;
int dRow[] = { -1, 0, 1, 0 }, dCol[] = { 0, 1, 0, -1 };//direction vectors
typedef long  long  ll;
#define MOD 1000000007
#define pb  push_back
#define FOR(a)     for(int i=0;i<a;++i)
#define sort(v)    sort(v.begin(),v.end());
#define reverse(v) reverse(v.begin(),v.end());
#define print(i,s) cout << "Case #" << i+1 << ": " << s << "\n";
#define line()   "\n"


int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  int t; cin >> t;
  for(int i=0;i<t;++i){
    string s; cin >> s;
    int res = 1e9+1;
    char temp = 'A';
    for(int j=0;j<26;++j){
        bool isvowel = false;
        int curr = 0;
        if(temp == 'A' || temp == 'U' || temp == 'E' || temp == 'O' || temp == 'I')
         isvowel = true;
        for(int k=0;k<s.size();++k){
          char ch = s[k];
          if(ch == temp) curr+=0;
          else if((ch == 'A' || ch == 'I' || ch == 'E' || ch == 'O' || ch == 'U') && isvowel)
             curr+=2;
          else if((ch == 'A' || ch == 'I' || ch == 'E' || ch == 'O' || ch == 'U') && !isvowel)
             ++curr;
          else if(isvowel)
            ++curr;
          else
           curr+=2;
        }
        res = min(res,curr);
        ++temp;
    }
    print(i,res);
  }
}
