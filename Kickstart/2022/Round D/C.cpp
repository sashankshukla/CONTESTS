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

int getIndex(vector<int> v, int K)
{
    auto it = find(v.begin(), v.end(), K);
  
    if (it != v.end()) 
    {
        int index = it - v.begin();
        return index;
    }
    else {
        return -1;
    }
}
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  int t; cin >> t;
  for(int i=0;i<t;++i){
    int n; cin >> n;
    vector<int> word;
    for(int j=0;j<n;++j){
        int val; cin >> val;
        word.push_back(val);
    }
    int m; cin >> m;
    vector<int> keyboard;
    for(int j=0;j<m;++j){
        int val; cin >> val;
        keyboard.push_back(val);
    }
    int res = 0;
    vector<vector<int>> paths;
    int curr_index = getIndex(keyboard,word[0]);
    for(int j=1;j<n;++j){
        int new_index = getIndex(keyboard,word[j]);
        if(new_index == curr_index)
          continue;
        else{
            res += abs(curr_index - new_index);
            curr_index = new_index;
        }
    }
    print(i,res);
  }
}


