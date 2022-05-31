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

vector<int> v = {6,3,4,8,7,12,43,52,2,8,90,100,87,2};

void selection_sort(){
  for(int i=0;i<v.size();++i){
    int min = i;
    for(int j=i+1;j<v.size();++j){
      if(v[j] < v[i])
        min= j;
    }
    swap(v[i],v[min]);
  }
}

void insertion_sort(){
  for(int i=1;i<v.size();++i){
       int temp = v[i];
       int j = i;
       while(j>0 && v[j-1] > temp){
           v[j] = v[j-1];
           --j;
       }
      v[j] = temp;
  }
}

int main(){
  ios::sync_with_stdio(0);cin.tie(0);

  insertion_sort();                 
  for(auto u : v){
    cout << u << " ";
  } 
  cout << line();
}
