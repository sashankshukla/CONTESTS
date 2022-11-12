#include <bits/stdc++.h>
using namespace std;
int dRow[] = { -1, 0, 0, 1 }, dCol[] = { 0, 1, -1, 0 };//direction vectors
typedef long  long  ll;
const ll  MOD = 1000000007;
#define PI acos(-1)
#define FOR(a)     for(int T=0;T<a;++T)
#define print(i,s) cout << "Case #" << i+1 << ": " << s << "\n";
#define line() "\n" 
#define GET_VARIABLE_NAME(Variable) (#Variable)
                  
template <typename T>
T output_vector(vector<T> vector) { cout << GET_VARIABLE_NAME(vector) << ": ["; for(auto val : vector) cout << val << " " ; cout << "]" << line() ; }
 
 struct toll{
   char operation;
   int value;
   toll(){}
   toll(char _operation, int _value) : operation(_operation), value(_value){}

 };

ll res = 0;
int n,p,m,x,y;

void dfs(int x, int y, int curr, int m, ll coins, map<pair<int,int>,toll> mp, int initial_x, int initial_y){
    if(curr == m){
        if(x != initial_x || y != initial_y)
           res = max(res,(ll)coins);
        return;
    }
    for(auto p : mp){
       toll t = p.second;
       ll c = coins;
       if(t.operation == '+')
          c+= t.value; 
       if(t.operation == '-') 
          c-= t.value;
       if(t.operation == '*')
          c*=t.value;
       if(t.operation == '/') 
          c/=t.value;
       int new_x = x+p.first.first;
       int new_y = y+p.first.second;
       if(new_x <= 0 || new_y <= 0 || new_x >n || new_y > n)
          continue;
        dfs(new_x,new_y,curr+1,m,c,mp,initial_x, initial_y);
    }
}
 
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  int t; cin >> t;
  FOR(t){
    cin >> n >> p >> m >> x >> y; // disregard p
    map<pair<int,int>,toll> mp;
    for(int i=0;i<4;++i){
      char ch; int val; cin >> ch >> val;
      mp[{dRow[i],dCol[i]}] = toll(ch,val);
    }
    dfs(x,y,0,m,0,mp, x,y);
    print(T,res);
    res = 0;
  }
}