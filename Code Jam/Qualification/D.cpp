#include <bits/stdc++.h>
using namespace std;
int dRow[] = { -1, 0, 1, 0 }, dCol[] = { 0, 1, 0, -1 };//direction vectors
const int mxn=1e5; 
typedef long  long  ll;
#define MOD 1000000007
#define pb  push_back
#define FOR(a)     for(int i=0;i<a;++i)
#define sort(v)    sort(v.begin(),v.end());
#define reverse(v) reverse(v.begin(),v.end());
#define print(i,s) cout << "Case #" << i+1 << ": " << s << "\n";
#define line()     "\n"



int dfs(int node , pair<int,int> adj[] , int ans , bool visited[]){
    if(node == 0 || visited[node]){
        return ans;
    }
    ans = max(ans , adj[node].first);
    visited[node] = true;
    if(!visited[adj[node].second])
     return dfs(adj[node].second , adj , ans , visited);
    else
     return ans;
}

int steps(int node , pair<int,int> adj[] , int ans , bool visited[]){
    if(node == 0)
     return ans;
    ++ans;
    return steps(adj[node].second , adj , ans , visited);
}

int main(){
ios::sync_with_stdio(0);cin.tie(0);
int t; cin >> t;
for(int i=0;i<t;++i){
    int n; cin >> n;
    pair<int , int> adj[n+1];
    bool visited[n+1]; bool is_initiator[n+1];
    memset(visited , false , n+1); memset(is_initiator, true , n+1);
    vector<int> fun_values;

    // storing fun values
    for(int j=0;j<n;++j){
        int val; cin >> val;
        fun_values.push_back(val);
    }

    // getting adjacent module and creating graph
    for(int j=0;j<n;++j){
        int val; cin >> val;
        is_initiator[val] = false;
        adj[j+1] = make_pair(fun_values[j] , val);
    }

    // sorting nodes based on distance from abyss
    vector<tuple<int,int,int>> order;
    for(int j=1;j<=n;++j){
        if(is_initiator[j])
         order.push_back(make_tuple(steps(j , adj , 0 , visited) ,fun_values[j-1],j));
    }
    sort(order);

    // calculating result by dfs for each initiator
    int res = 0;
    for(tuple<int,int,int> p : order){
        res += dfs(get<2>(p) , adj , 0 , visited);
    }

    print(i ,res);
  }
}