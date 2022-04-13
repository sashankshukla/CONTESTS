#include <bits/stdc++.h>
using namespace std; typedef  long  long  ll; typedef vector<int> vi; typedef set<int> si;
#define FOR(a)  for(int i=0;i<a;++i)
#define add(a) v.push_back(a);
#define sort(v) sort(v.begin(),v.end());
#define print(i,s) cout << "Case #" << i+1 << ": " << s << "\n";
int main(){
ios::sync_with_stdio(0);cin.tie(0); int t; cin >> t;
for(int i=0;i<t;++i){
	int n; cin >> n;
	int arr[n][n];
	for(int r=0;r<n;++r){
       for(int c=0;c<n;++c){
		   cin >> arr[r][c];
	   }
	}
	map<int, ll> mp;
	ll res = (ll)0;
	for(int r=0;r<n;++r){
		for(int c=0;c<n;++c){
			mp[r-c]+= (ll)arr[r][c];
			if(mp[r-c] > res)
			  res = mp[r-c];
		}
	}
	print(i,res);
 }
}
