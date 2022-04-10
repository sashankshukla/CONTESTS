#include <bits/stdc++.h>
using namespace std; typedef  long  long  ll; typedef vector<int> vi; typedef set<int> si;
#define  FOR(a)  for(int i=0;i<a;++i)
#define  vadd(a) v.push_back(a);
#define  sort(v) sort(v.begin(),v.end());
#define print(i,s) cout << "Case #" << i+1 << ": " << s << "\n";
#define in(t) cin>>t;
int main(){
 ios::sync_with_stdio(0);cin.tie(0); int t; in(t); string kick="KICK",start="START";
 FOR(t){
	 string s; in(s); int ans=0,k_count=0;
	 if(s.size()<=5)
        ans=0;
     else{
	 s=s+" ";
     for(int j=0;j<s.size()-4;++j){
        if(s.substr(j,4)==kick)
            ++k_count;
        if(s.substr(j,5)==start)
            ans+=k_count;
	  }
	 }
	 print(i,ans);
 }
}
