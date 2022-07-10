#include <bits/stdc++.h>
using namespace std;
int dRow[] = { -1, 0, 1, 0 }, dCol[] = { 0, 1, 0, -1 };//direction vectors
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
  for(int i=0;i<t;++i){
   int n,m ; cin >> n >> m;
   vector<double> v;
   for(int j=0;j<n;++j){
     double val; cin >> val;
     v.push_back(val);
   }
   sort(v);
   vector<double> last;
   double res = 0;
   int total = m;
   for(int j=v.size()-1;j>=0;--j){
       if(total == 1){
        for(int k=0;k<=j;++k){
            last.push_back(v[k]);
        }
         break;
       }
       else{
        res+= v[j];
       }
       --total;
   }
   double median = 0.00000000;
   if(last.size() != 0){
    if(last.size()%2 == 0){
      median = (last[last.size()/2-1]+last[last.size()/2])/2;
    }
    else{
     median = last[last.size()/2];
    }
   }
   res+= median;
   cout << std::fixed;
   cout << std::setprecision(7);
   print(i,res);
  }
}
