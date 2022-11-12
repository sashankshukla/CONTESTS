#include <bits/stdc++.h>
using namespace std;
int dRow[] = { -1, 0, 1, 0 }, dCol[] = { 0, 1, 0, -1 };//direction vectors
const int mxn=1e5; vector<int> adj[mxn]; bool visited[mxn]; int d[mxn];
typedef long  long  ll;
#define MOD 1000000007
#define pb  push_back
#define FOR(a)     for(int i=0;i<a;++i)
//#define sort(v)    sort(v.begin(),v.end());
#define reverse(v) reverse(v.begin(),v.end());
#define print(i,s) cout << "Case #" << i+1 << ": " << s << "\n";
#define line()     "\n"

template <typename T>
void remove(std::vector<T>& v, size_t index) {
    v.erase(v.begin() + index);
}

int main(){
ios::sync_with_stdio(0);cin.tie(0);
int t; cin >> t;
for(int i=0;i<t;++i){
    int n; cin >> n;
    vector<string> words;
    for(int j=0;j<n;++j){
        string s; cin >> s;
        words.push_back(s);
    }
    sort(words.begin(),words.end());
    reverse(words);
    string ans = "";
    ans += words[0];
    bool chk = true;
    for(int j=1;j<words.size();++j){
        bool temp = true;
        for(int k=1;k!=j && k<words.size();++k){
            if(words[j][words[j].size()-1] == words[k][0]){
                temp = true;
                ans += words[j];
                ans += words[k];
                remove(words,j);
                remove(words , k);
                j=0; k=0;
            }
            else{
                temp  = false;
            }
        }
        if(!temp){
            chk = false;
            break;
        }
    }
  if(chk){
      print(i,ans);
  }
  else{
      print(i,"IMPOSSIBLE");
  }
 }
}