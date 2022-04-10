#include <bits/stdc++.h>
using namespace std; typedef  long  long  ll; typedef vector<int> vi; typedef set<int> si;
#define FOR(a)  for(int i=0;i<a;++i)
#define add(a) v.push_back(a);
#define sort(v) sort(v.begin(),v.end());
#define print(i,s) cout << "Case #" << i+1 << ": " << s << "\n";
int main(){
ios::sync_with_stdio(0);cin.tie(0); int t; cin >> t;
FOR(t){
	int n; cin >> n; int arr[n][n];
	for(int r=0;r<n;++r){
        for(int c=0;c<n;++c){
            cin >> arr[r][c];
        }
    }
    int reps=(n*2)-1; ll m=(ll)0;
	for(int j=0;j<reps;++j){
	    int x=0,y=0; ll sum=(ll)0;
        if(j<n){
		 x=n-j-1,y=0;
		}
        else{
         x=0,y=j-n+1;
        }
		while(x<n && y<n){
			sum+=(ll)arr[x][y];
			++x; ++y;
		}
		m=max(sum,m);
	}
	  print(i,m);
  }
}
