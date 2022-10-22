#include <bits/stdc++.h>
using namespace std;
int dRow[] = { -1, 0, 1, 0 }, dCol[] = { 0, 1, 0, -1 };//direction vectors 
typedef long  long  ll;
const ll  MOD = 1000000007;
#define PI acos(-1)
#define FOR(a)     for(int t=0;t<a;++t)
#define print(i,s) cout << "Case #" << i+1 << ": " << s << "\n";
#define fix(x) cout<<setprecision(x)<<fixed
#define line() "\n" 

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template <typename T_vector>
void output_vector(const T_vector &v) { for(auto val : v) cout << val << " "; cout << line();}
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}

#ifndef DEBUG
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif



string findMiddleCourse(vector<vector<string>> edges)
{
    
     set<string> left,right;
     map<string,string> prereqs;

     for(auto edge : edges){
        left.insert(edge[0]);
        right.insert(edge[1]);
        prereqs[edge[0]] = edge[1];
     }

     vector<string> path; string start;
     for(auto course : left){
        if(!right.count(course)){
            start = course;
            break;
        }
     }

     while(start != "") {
        path.push_back(start);
        if(prereqs.count(start)){
              start = prereqs[start];
        }
        else{
              start = "";
        }
     }

     if(path.size() %2 == 0)
       return path[path.size()/2 -1];
       return path[path.size()/2];
}

int main(){
 ios::sync_with_stdio(0); cin.tie(0);
 vector<vector<string>> courses = {
      {"Foundations of Computer Science", "Operating Systems"},
      {"Data Structures", "Algorithms"},
      {"Computer Networks", "Computer Architecture"},
      {"Algorithms", "Foundations of Computer Science"},
      {"Computer Architecture", "Data Structures"},
      {"Software Design", "Computer Networks"}};

    vector<vector<string>> prereqs_courses2 = {
      {"Data Structures", "Algorithms"},
      {"Algorithms", "Foundations of Computer Science"},
      {"Foundations of Computer Science", "Logic"},
    };

    vector<vector<string>> prereqs_courses3 = {
      {"Data Structures", "Algorithms"},
    };

    cout << findMiddleCourse(courses) << line();
    cout << findMiddleCourse(prereqs_courses2) << line();
    cout << findMiddleCourse(prereqs_courses3) << line();
}