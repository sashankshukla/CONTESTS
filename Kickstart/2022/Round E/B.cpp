#include <bits/stdc++.h>
using namespace std;
int dRow[] = { -1, 0, 1, 0 }, dCol[] = { 0, 1, 0, -1 };//direction vectors
typedef long  long  ll;
const ll  MOD = 1000000007;
#define PI acos(-1)
#define FOR(a)     for(int it=0;it<a;++it)
#define print(i,s) cout << "Case #" << i+1 << ": " << s << "\n";
#define line() "\n" 
                  
 
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  int t; cin >> t;
  FOR(t){
    int n; cin >> n;
    vector<int> s(n);
    for(int i=0;i<n;++i){
      cin >> s[i];
    }
    vector<int> temp = s;
    cout << "Case #" << it+1 << ": ";
    sort(temp.begin(),temp.end());
    for(int i=0;i<s.size();++i){
        int target = 2*s[i];
        int res = -1;
        int l = 0,r=temp.size()-1;
        while(l<=r){
            int m = l+(r-l)/2;
            if(temp[m] <= target){
                if(temp[m] != s[i])
                  res = temp[m];
                if(m-1 >= 0) res = max(res,temp[m-1]);
                l = m+1;
            }
            else
               r = m-1;
        }
        cout << res << " ";
    }
    cout << line();
  }
}