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
#define line()     "\n"

int minof3(int x , int y , int z){
    if(x <= y)
     return min(x ,z);
    if(x <= z)
     return min(x , y);
    else
     return min(y , z);
}

int main(){
ios::sync_with_stdio(0);cin.tie(0);
int t; cin >> t;
for(int i=0;i<t;++i){
     int p1[4];
     cin >> p1[0] >> p1[1] >> p1[2] >> p1[3];
     int p2[4];
     cin >> p2[0] >> p2[1] >> p2[2] >> p2[3];
     int p3[4];
     cin >> p3[0] >> p3[1] >> p3[2] >> p3[3];
     int sum=0;
     int diff =1e6;
     int min1 = minof3(p1[0] , p2[0] , p3[0]);
     int min2 = minof3(p1[1] , p2[1] , p3[1]);
     int min3 = minof3(p1[2] , p2[2] , p3[2]);
     int min4 = minof3(p1[3] , p2[3] , p3[3]);
     string ans = to_string(min1);
     diff = diff - min1;
      if(diff<0)
       diff = 0;
     if(min2 > diff){
         ans += " " + to_string(diff);
         diff-= diff;
     }
     else{
         ans += " " + to_string(min2);
         diff-=min2;
     }
     if(diff<0)
       diff = 0;
      if(min3 > diff){
         ans += " " + to_string(diff);
         diff-= diff;
     }
     else{
         ans += " " + to_string(min3);
         diff-=min3;
     }
      if(diff<0)
       diff = 0;
      if(min4 > diff){
         ans += " " + to_string(diff);
         diff-= diff;
     }
     else{
         ans += " " + to_string(min4);
         diff-=min4;
     }

    if(diff == 0){
      print(i , ans);
     }
    else
     print(i , "IMPOSSIBLE");
  }
}