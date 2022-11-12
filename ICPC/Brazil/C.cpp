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
  int b,l; cin >> b >> l;
  ++b;
  string number="";
  for(int i=0;i<l;++i){
       int digit; cin >> digit;
       number+= to_string(digit);
  }
  bool chk = false;
  int number_as_int = stoi(number);
  if(number_as_int%b==0)
    cout << "0 0";
  else{
    for(int i=0;i<l;++i){
        string temp = number;
        for(int j=0;j<(number[i]-'0');++j){
            temp[i] = (j+'0');
            if(stoi(temp)%b==0){
                chk = true;
                cout << (i+1) << " " << j;
                i=l;
                break;
            }
        }
    }
    if(!chk)
     cout << "-1 -1";
  }
}