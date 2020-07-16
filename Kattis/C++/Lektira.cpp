#include<iostream>
#include<map>
#include<vector>
#include<set>
#include<unordered_set>
#include<unordered_map>
#include<list>
#include<string>
#include<algorithm>
#include<cmath>
#include<iterator>
#include<cstring>
#include<stack>
#include<queue>
#include<bitset>
#include<climits>
#include<sstream>
#define endl '\n'
using namespace std;

#define pb push_back
#define pf push_front
#define umap unordered_map
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define uset unordered_set
#define REP(i,a,b) for(int i = a; i < b; i++)

using vi = vector<int>;
using vs = vector<string>;
using ss = stringstream;
using sets = set<string>;
using msi = map<string,int>;
using msvs = map<string,vs>;
using ll = long long;
using dd = pair<double,double>;
using vb = vector<bool>;
using vd = vector<double>;
using ii = pair<int,int>;
using vii = vector<ii>;
using usets = unordered_set<string>;
using vdd = vector<dd>;
using mci = map<char,int>;
using vll = vector<ll>;
using mii = map<int,int>;
using li = list<int>;
using msli = map<string,li>;
using msvi = map<string,vi>;
using umsvi = umap<string,vi>;

int main()
{
    string s;
    cin >> s;
 
    string ans = "~";
    for(int i = 1; i < s.size(); i++)
        for(int j = i+1; j < s.size(); j++)
        {
            string a, b, c;
            a = s.substr(0,i);
            reverse(a.begin(), a.end());
            
            b = s.substr(i,j-i);
            reverse(b.begin(), b.end());
            
            c = s.substr(j);
            reverse(c.begin(), c.end());
            
            ans = min(ans,a+b+c);
            
        }
    cout << ans << endl;
    return 0;
}