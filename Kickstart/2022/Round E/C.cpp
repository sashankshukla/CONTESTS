#include <bits/stdc++.h>
using namespace std;
int dRow[] = { -1, 0, 1, 0 }, dCol[] = { 0, 1, 0, -1 };//direction vectors
typedef long  long  ll;
const ll  MOD = 1000000007;
#define PI acos(-1)
#define FOR(a)     for(int it=0;it<a;++it)
#define print(i,s) cout << "Case #" << i+1 << ": " << s << "\n";
#define line() "\n" 

bool isPalindrome(string s){
    string rev(s.rbegin(),s.rend());
    return s == rev;
}             
 
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  int t; cin >> t;
  FOR(t){
    int n; cin >> n;
    string s; cin >> s;
    vector<string> p;
    for(int i=0;i<s.size();++i){
        int l=i,r=i;
        while(l>=0 && r<s.size() && s[l] == s[r]){
            p.push_back(s.substr(l,r-l+1));
            --l;
            ++r;
        }
    }
    for(int i=0;i<s.size()-1;++i){
        int l=i,r=i+1;
        while(l>=0 && r<s.size() && s[l] == s[r]){
            p.push_back(s.substr(l,r-l+1));
            --l;
            ++r;
        }
    }
    int minLength = 1e9+1;
    string res;
    for(string pal : p) if(isPalindrome(pal+s) && pal.size() < minLength){
        minLength = pal.size();
        res = pal;
    }
    print(it,res);
  }
}