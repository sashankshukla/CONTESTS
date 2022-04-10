#include <bits/stdc++.h>
using namespace std;

int dRow[] = { -1, 0, 1, 0 }, dCol[] = { 0, 1, 0, -1 };//direction vectors
#define round(n) setprecision(n)

int main(){
   ios::sync_with_stdio(0); cin.tie(0);
    int a[6];int b[6];
    for(int i=0;i<6;++i){
        cin >> a[i];
    }
    for(int i=0;i<6;++i){
        cin >> b[i];
    }
    double p1=0,p2=0;
    for(int num : a){
        for(int num2 : b){
            if(num>num2)
                ++p1;
            if(num2>num)
                ++p2;
        }
    }
    double res = p1/(p1+p2);
    cout<< fixed;
    cout << round(5) << res;
}
