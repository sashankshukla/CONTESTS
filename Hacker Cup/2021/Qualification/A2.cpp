#include <bits/stdc++.h>
using namespace std;
int dRow[] = { -1, 0, 1, 0 }, dCol[] = { 0, 1, 0, -1 };//direction vectors
typedef long  long  ll;
#define MOD 1000000007
#define FOR(a)     for(int i=0;i<a;++i)
#define sort(v)    sort(v.begin(),v.end());
#define reverse(v) reverse(v.begin(),v.end());
#define print(i,s) cout << "Case #" << i+1 << ": " << s << "\n";
#define line()   "\n"
#define write(i,s) myfile << "Case #" << i+1 << ": " << s << "\n";


vector<int> adj[26];
vector<vector<int>> lookup;

void bfs(int x){
    vector<bool> visited;
    for(int i=0;i<26;++i){
       visited.push_back(false);
    }
    lookup[x][x] = 0;
    queue<int> q;
    q.push(x);
    while(!q.empty()){
        int s = q.front(); q.pop();
        visited[s] = true;
        for(auto u : adj[s]){
            if(!visited[u]){
                visited[u] = true;
                lookup[x][u] = lookup[x][s] +1;
                q.push(u);
            }
        }
    }
}

int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  ofstream myfile;
  myfile.open ("output.txt");
  int t; cin >> t;
  for(int i=0;i<t;++i){
     string s; cin >> s;
     int n; cin >> n;
     for(int j=0;j<n;++j){
        string path; cin >> path;
        char s = path[0], d= path[1];
        adj[s-'A'].push_back(d-'A');
     }

     for(int j=0;j<26;++j){
        vector<int> p;
        for(int k=0;k<26;++k){
           p.push_back(1e9+1);
        }
        lookup.push_back(p);
     }
     
     for(int j=0;j<26;++j) bfs(j);

     char temp = 'A';
     int res = 1e9+1;
     for(int j=0;j<26;++j){
        bool chk = true;
        int dist = 0;
        for(char ch : s){
             int add = lookup[ch-'A'][temp-'A'];
             if(add == 1e9 + 1){
                chk = false;
                break;
             }
             dist = dist + add;
        }
        ++temp;
        if(chk)
          res = min(res,dist);
     }
     if(res == 1e9+1){
         write(i,-1);
     }    
     else
        write(i,res);
     

    for(int j=0;j<26;++j){
        for(int k=0;k<26;++k) lookup[j][k] = 1e9+1;
     }
     for(int j=0;j<26;++j) adj[j].clear();  

  }
   myfile.close();
}
