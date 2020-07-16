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
#include<iomanip>
#define endl '\n'
using namespace std;

#define pb push_back
#define pf push_front
#define umap unordered_map
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define uset unordered_set
#define REP(i,a,b) for(int i = a; i < b; i++)
#define PI acos(-1)
#define Euler exp(1)
#define fi first
#define se second
#define RESET(N,value, arr) REP(i,0,N) arr[i] = value

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

bool isPalindrome(string s)
{
    int L = s.size()-1;
    for(int i = 0; i < s.size(); i++)
            if (s[i] != s[L-i])
            return false;
    return true;
}

int main()
{
    fast
    string s;
    while(cin >> s)
    {
        set<string> dict;
        int L = s.size();
        
        for(int i = 0; i < L; i++)
            for(int j = 1; j <= L; j++)
            {
                string st = s.substr(i,j);
                if (st.size() == 1)
                    continue;
                if (st[0] != st[st.size() - 1])
                    continue;
                    
                if (isPalindrome(st))
                    dict.insert(st);
            }
        for(auto it = dict.begin(); it!= dict.end(); it++)
            cout << *it << endl;
        cout << endl;
    }
    return 0;
}