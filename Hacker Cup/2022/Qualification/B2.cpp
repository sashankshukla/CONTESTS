#include <bits/stdc++.h>
using namespace std;
int dRow[] = { -1, 0, 1, 0 }, dCol[] = { 0, 1, 0, -1 };//direction vectors
typedef long  long  ll;
const ll  MOD = 1000000007;
#define PI acos(-1)
#define FOR(a)     for(int T=0;T<a;++T)
#define print(i,s) cout << "Case #" << i+1 << ": " << s << "\n";
#define line() "\n" 
#define GET_VARIABLE_NAME(Variable) (#Variable)
                  
template <typename T>
T output_vector(vector<T> vector) { cout << GET_VARIABLE_NAME(vector) << ": ["; for(auto val : vector) cout << val << " " ; cout << "]" << line() ; }
 
int neighbours(vector<string> grid, int x, int y){
    int res = 0;
    vector<int> dRow = {-1,0,1,0},dCol = {0,1,0,-1};
    for(int i=0;i<4;++i){
        int new_x = x + dRow[i], new_y = y + dCol[i];
        if(new_x < 0 || new_y < 0 || new_x >= grid.size() || new_y >= grid.size())
          continue;
        if(grid[new_x][new_y] == '^')
           ++res;
    }
    return res;
}
 
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  int t; cin >> t;
  FOR(t){
    int r,c; cin >> r >> c;
    int tree_count = 0;
    vector<string> grid(r);
    vector<vector<bool>> is_essential(r,vector<bool>(c,false));
    for(int i=0;i<r;++i){
         cin >> grid[i];
         for(int j=0;j<c;++j){
            tree_count += grid[i][j] == '^';
            if(grid[i][j] == '^')
            is_essential[i][j] = true;
         }
    }
    if(tree_count == 0){
      print(T,"Possible");
      for(string s : grid)
        cout << s << line();
      continue;
    }
    if(r == 1 || c == 1){
      print(T,"Impossible");
      continue;
    }
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            if(grid[i][j] == '.'){
                grid[i][j] = '^';
            }
        }
    }
    bool res = true;
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            if(grid[i][j] == '#')
              continue;
            int good = neighbours(grid,i,j);
            if(is_essential[i][j] && good < 2){
                res = false;
                i = r;
                break;
            }
            else if(good < 2)
              grid[i][j] = '.';  
        }
    }

    if(!res){
      print(T,"Impossible");
    }
    else{ 
    print(T,"Possible");
    for(string s : grid)
    cout << s << line();
    }
  }
}