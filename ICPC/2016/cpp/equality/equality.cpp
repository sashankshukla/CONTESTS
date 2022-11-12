#include <bits/stdc++.h>
using namespace std;

int dRow[] = { -1, 0, 1, 0 }, dCol[] = { 0, 1, 0, -1 };//direction vectors

int main(){
   ios::sync_with_stdio(0); cin.tie(0);
   int a,b,c; char o,e; 
   cin >> a >> o >> b >> e >> c;
   if(a+b == c)
    cout << "YES";
   else
     cout << "NO";

}