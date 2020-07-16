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

int main()
{   
    fast
    mci dict;
    dict[32] = 0; dict['!'] = 9; dict['"'] = 6; dict['#'] = 24; dict['$'] = 29; dict['%'] = 22;
    dict['&'] = 24; dict[39] = 3;  dict['('] = 12; dict[')'] = 12; dict['*'] = 17; dict['+'] = 13;
    dict[','] = 7;  dict['-'] = 7; dict['.'] = 4; dict['/'] = 10; dict['0'] = 22; dict['1'] = 19;
    dict['2'] = 22; dict['3'] = 23; dict['4'] = 21; dict['5'] = 27; dict['6'] = 26; dict['7'] = 16;
    dict['8'] = 23; dict['9'] = 26; dict[':'] = 8; dict[';'] = 11; dict['<'] = 10; dict['='] = 14;
    dict['>'] = 10; dict['?'] = 15; dict['@'] = 32; dict['A'] = 24; dict['B'] = 29; dict['C'] = 20;
    dict['D'] = 26; dict['E'] = 26; dict['F'] = 20; dict['G'] = 25; dict['H'] = 25; dict['I'] = 18;
    dict['J'] = 18; dict['K'] = 21; dict['L'] = 16; dict['M'] = 28; dict['N'] = 25; dict['O'] = 26;
    dict['P'] = 23; dict['Q'] = 31; dict['R'] = 28; dict['S'] = 25; dict['T'] = 16; dict['U'] = 23;
    dict['V'] = 19; dict['W'] = 26; dict['X'] = 18; dict['Y'] = 14; dict['Z'] = 22; dict['['] = 18;
    dict['\\'] = 10; dict[']'] = 18; dict['^'] = 7; dict['_'] = 8; dict['`'] = 3; dict['a'] = 23;
    dict['b'] = 25; dict['c'] = 17; dict['d'] = 25; dict['e'] = 23; dict['f'] = 18; dict['g'] = 30;
    dict['h'] = 21; dict['i'] = 15; dict['j'] = 20; dict['k'] = 21; dict['l'] = 16; dict['m'] = 22;
    dict['n'] = 18; dict['o'] = 20; dict['p'] = 25; dict['q'] = 25; dict['r'] = 13; dict['s'] = 21;
    dict['t'] = 17; dict['u'] = 17; dict['v'] = 13; dict['w'] = 19; dict['x'] = 13; dict['y'] = 24;
    dict['z'] = 19; dict['{'] = 18; dict['|'] = 12; dict['}'] = 18; dict['~'] = 9; 
    
    string s;
    while(getline(cin,s))
    {
        int sum = 0;
        for(char &c: s)
            sum += dict[c];
        
        cout << sum << endl;
    }
    return 0;
}