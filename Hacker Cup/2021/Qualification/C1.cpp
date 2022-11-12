#include <bits/stdc++.h>
using namespace std;
int dRow[] = { -1, 0, 1, 0 }, dCol[] = { 0, 1, 0, -1 };//direction vectors
typedef long  long  ll;
#define MOD 1000000007
#define PI acos(-1)
#define FOR(a)     for(int it=0;it<a;++it)
// printers/writers
#define print(i,s) cout << "Case #" << i+1 << ": " << s << "\n";  // google 
#define write(i,s) myfile << "Case #" << i+1 << ": " << s << "\n"; // facebook
#define line()   "\n"
// file io
ofstream myfile;
#define f_init()  myfile.open("output.txt"); cout << "f_init" << line();
#define f_close() myfile.close(); cout << "f_close" << line();


vector<int> adj[50];
vector<int> who(50,-2);

void bfs(int start,vector<int> vertices, vector<ll>& dist , vector<bool> visited) {
  dist[start] = vertices[start];
  queue<int> q;
  q.push(start);
  who[start] = -1;
  while(!q.empty()){
    int top = q.front(); q.pop();
    visited[top] = true;
    for(auto u : adj[top]){
      if(!visited[u]){
        q.push(u);
        dist[u] = vertices[u] + dist[top];
        who[u] = top;
      }
    }
  }
}


int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  int t; cin >> t;
  FOR(t){
    int n; cin >> n;
    vector<int> vertices(n); vector<ll> dist(50,0); vector<bool> visited(50,false);

    for(int i=0;i<n;++i) cin >> vertices[i];

    for(int i=0;i<n-1;++i){
      int a,b; cin >> a >> b; --a; --b;
      adj[a].push_back(b);
      adj[b].push_back(a);
    }

    bfs(0,vertices,dist, visited);

    ll res= 0; int index = -1;
    for(int i=0;i<dist.size();++i){
       if(ll(dist[i])>res){
         res = (ll)dist[i];
         index = i;
       }
    }

    int curr = index;
    while(curr != -1){
      visited[curr] = true;
      curr = who[curr];
    }
    visited[0] = false;

    ll other = -1;
    for(int i=0;i<n;++i){
      dist[i] = 0;
    }
    bfs(0,vertices,dist,visited);
    for(int val : dist)
      other = max(other,(ll)val-vertices[0]);
  
    if(other == -1){
     print(it,res);}
    else
     print(it,res+other);

    for(int i=0;i<n;++i){
      adj[i].clear();
    }
  }
}
