#include <bits/stdc++.h>
using namespace std; typedef  long  long  ll; typedef vector<int> vi; typedef set<int> si;
#define  FOR(a)  for(int i=0;i<a;++i)
#define  vadd(a) v.push_back(a);
#define  sort(v) sort(v.begin(),v.end());
#define print(i,s) cout << "Case #" << i+1 << ": " << s << "\n";
#define in(t) cin>>t;
int main(){
 ios::sync_with_stdio(0);cin.tie(0); int t; in(t);
 FOR(t){
	 cout << "Case #" << i+1 << ": " ;
	 int n,m; cin >> n >> m; queue<pair<int,int>> q;
	 for(int j=0;j<n;++j){
		 int val; in(val);
		 if(val<=m)
            cout << j+1 << " ";
         else
		 q.push({j+1,val});
	 }
      while(!q.empty()){
         pair<int,int> curr=q.front(); int index=curr.first,v=curr.second;
         if(v<=m){
            cout << index << " "; q.pop();
            }
         else{
            v-=m;
            q.pop(); q.push({index,v});
         }
      }
       cout << "\n";
	 }
 }

