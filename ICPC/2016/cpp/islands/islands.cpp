#include <bits/stdc++.h>
using namespace std;

int dRow[] = { -1, 0, 1, 0 }, dCol[] = { 0, 1, 0, -1 };//direction vectors
char grid[50][50]; bool visited[50][50];
#define line()  "\n"
int r,c;

bool isValid(int row, int col){
   return row>=0 && col>=0 && row<r && col<c && !visited[row][col] && grid[row][col] != 'W';
}

void dfs(int row, int col){
    if(visited[row][col])return;
    visited[row][col]=true;
    for(int i=0; i<4;++i){
        int adjx = row + dRow[i];
        int adjy = col + dCol[i];
        if(isValid(adjx,adjy))
          dfs(adjx, adjy);
    }
}


int main(){
   ios::sync_with_stdio(0); cin.tie(0);
   cin >> r >> c;
   for(int i =0;i<r;++i){
       for(int j=0;j<c;++j){
           cin >> grid[i][j];
       }
   }

   int res=0;
   for(int i=0; i<r;++i){
       for(int j=0;j<c;++j){
           if(grid[i][j]=='L' && !visited[i][j]){
               dfs(i,j);
               ++res;
           }
       }
   }

   cout << res;

}
