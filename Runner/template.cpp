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
#define line()   "\n"



int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  int t; cin >> t;
  FOR(t){
    int n,s; cin >> n >> s;
    int sum = 0;
    deque<int> q;
    for(int i=0;i<n;++i){
       int val; cin >> val;
       q.push_back(val);
       sum+=val;
    }
    if(sum == s)
      cout << 0 << line();
    else if(sum < s)
      cout << -1 << line();
    else{
      int temp = 0;
      int res = 0;
      while(temp != sum-s){
        int front = q.front();
        int back = q.back();
        if(front == 0 && back == 0){
           ++res;
           q.pop_front();
        }
        else if(front == 1 && back == 0){
          ++res; ++temp;
          q.pop_front();
        }
        else if(front == 0 && back == 1){
          ++res; ++temp;
          q.pop_back();
        }
        else{
           ++res; ++temp; q.pop_front();
        }
      }
      cout << res << line();
    }
  }
} 