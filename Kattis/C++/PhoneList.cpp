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
using vf = vector<float>;

int main()
{
    fast
    int tc, n;
    string st;
    bool yes;
    
    vector<string> dict;
    
    cin >> tc;
    while(tc--)
    {
        yes = true;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> st;
            dict.push_back(st);
        }
        
        sort(dict.begin(),dict.end());
        
        string x = dict[0];
        for(int i = 1; i < n; i++)
        {
            string tmpX = dict[i].substr(0,x.length());
            if (x == tmpX) 
            {
                yes = false; 
                break;
            }
            x = dict[i];
        }
        
        if (yes) cout << "YES\n"; 
        else
        cout << "NO\n";
        
        dict.clear();
    }
    return 0;
}