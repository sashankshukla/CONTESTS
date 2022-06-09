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

  

vector<string> perms; // all possible strings after changing question mark
// void permute(string a,int l, int r){

//   if(a.find('?') == string::npos && find(perms.begin(),perms.end(),a) == perms.end()){
//        perms.push_back(a);
//        return;
//   }
//   for(int i=l;i<=r;++i){
//       if(a[i] == '?'){
//         a[i]='0';
//         permute(a,l+1,r);
//         a[i]='1';
//         permute(a,l+1,r);
//       }
//    }
// }

void permute(string a, int index){
   bool chk = false;
   int temp = index;
   for(int i=index;i<a.size();++i){
      if(a[i] == '?'){
        chk = true;
        temp = i;
        break;
      }
   }
   if(!chk){
     perms.push_back(a);
     return;
   }
   permute(a.replace(temp,1,"0"),temp+1);
   permute(a.replace(temp,1,"1"),temp+1);
}


bool isPalindrome(string s){
  string rev(s.rbegin(),s.rend());
  return rev == s;
}

int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  int t; cin >> t;
  for(int i=0;i<t;++i){
    perms.clear();
    int n; cin >> n;
    string s; cin >> s;
    permute(s,0);
    bool res = false;
    for(string p : perms){
      if(p.size() < 5){
        res = true;
        break;
      }
      else{
        bool chk = true;
        for(int j=0;j<p.size();++j){
          for(int k=5;k+j-1<p.size() && k<=6;++k){
             string sub = p.substr(j,k);
             if(isPalindrome(sub)){
               chk = false;
               j = p.size();
               break;
             }
          }
        }
        if(chk){
        res = true;
        break;
        }
      }
    }
    if(res){
      print(i,"POSSIBLE");}
    else{
      print(i,"IMPOSSIBLE");
    }
  }
} 