#include <bits/stdc++.h>
using namespace std;
int dRow[] = { -1, 0, 1, 0 }, dCol[] = { 0, 1, 0, -1 };//direction vectors
typedef long  long  ll;
#define MOD 1000000007
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
  ios::sync_with_stdio(0);cin.tie(0); f_init();
  int t; cin >> t;
  FOR(t){
    int n; cin >> n;
    vector<string> grid;
    for(int i=0;i<n;++i){
        string s; cin >> s;
        grid.push_back(s);
    }

    int total = 0;
    map<int,int> mp;
    for(int i=0;i<n;++i){
        int temp = 0;
        bool chk = true;
        int cnt = 0;
        for(int j=0;j<n;++j){
            if(grid[i][j] == 'O')
              chk = false;
            else if(grid[i][j] == '.'){
              ++cnt;
            }
        }
        if(chk && cnt == 1){
          for(int j=0;j<n;++j){
            if(grid[i][j] == '.'){
               grid[i][j] = '*';
               ++total;
            }
          }
          mp[cnt]++;
        }
        else if(chk){
           mp[cnt]++;
        }
    }

    for(int i=0;i<n;++i){
        bool chk = true;
        int cnt = 0;
        for(string s : grid){
            char ch = s[i];
            if(ch == 'O')
              chk = false;
            else if(ch == '*'){
                ++cnt;
            }
            else if(ch == '.'){
             ++cnt;
            }
        }
        if(chk && cnt == 1){
          for(string s : grid){
            char ch = s[i];
            if(ch == '.')
              ++total;
          }
          mp[cnt]++;
        }
        else if(chk)
         mp[cnt]++;
    }

    int res = 1e9+1;
    for(auto p :mp){
        if(p.first < res && p.first != 0)
           res = p.first;
    }

    if(res == 1e9+1){
        write(it,"Impossible");
    }
    else if(res == 1){
        write(it,to_string(1)+" "+to_string(total));
    }
    else{
        write(it,to_string(res)+" "+to_string(mp[res]));
    }
  }
  f_close();
}
