#include <bits/stdc++.h>
using namespace std;
int dRow[] = { -1, 0, 1, 0 }, dCol[] = { 0, 1, 0, -1 };//direction vectors
typedef long  long  ll;
#define MOD 1000000007
#define pb  push_back
#define FOR(a)     for(int i=0;i<a;++i)
//#define sort(v)    sort(v.begin(),v.end());
//#define reverse(v) reverse(v.begin(),v.end());
#define print(i,s) cout << "Case #" << i+1 << ": " << s << "\n";
#define line()   "\n"


int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  int t; cin >> t;
  for(int i=0;i<t;++i){
    int n; cin >> n;
    set<pair<int,int>> set;
    vector<string> grid;
    for(int j=0;j<n;++j){
        string s; cin >> s;
        grid.push_back(s);
    }
    map<int,int> mp;

    // horizontal cnt
    for(string s : grid){
        bool chk = true;
        int cnt = 0;
        for(char ch : s){
            if(ch == 'O')
              chk = false;
            else if(ch == '.')
              ++cnt;

        }
        if(chk){
            mp[cnt]++;
        }
    }

    //vertical cnt
    for(int j=0;j<n;++j){
        bool chk = true;
        int cnt = 0;
        for(string s : grid){
            char ch = s[j];
            if(ch == 'O')
              chk  = false;
            else if(ch == '.')
              ++cnt;
        }
        if(chk)
          mp[cnt]++;
    }

    int min_key = 1e9+1;
    for(auto p : mp){
        if(p.first < min_key && p.first != 0)
          min_key = p.first;
    }
    if(min_key == 1e9+1){
        print(i,"Impossible");
    }
    else{
        cout << "Case #" << i+1 << ": " << min_key << " " << mp[min_key] << "\n";
    }
  }
}
