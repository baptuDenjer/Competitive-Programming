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
    int a1,a2,b1,b2;
    double c1 = 0, c2 = 0;
    vector<int> emma, gunnar;
    
    cin >> a1 >> b1 >> a2 >> b2;
    
    for(int i = a1; i <= b1; i++)
        for(int j = a2; j<= b2; j++)
            gunnar.push_back(i+j);
    
    cin >> a1 >> b1 >> a2 >> b2;
    
    for(int i = a1; i <= b1; i++)
        for(int j = a2; j<= b2; j++)
            emma.push_back(i+j);
            
    for(int i = 0; i < gunnar.size(); i++)
        for(int j = 0; j < emma.size(); j++)
            if (gunnar[i] > emma[j]) c1++;
            else
            if (gunnar[i] < emma[j]) c2++;
            else
            {
                c1++; c2++;
            }
            
    if (c1 > c2) cout << "Gunnar" << endl; else
    if (c1 < c2) cout << "Emma" << endl; else
    cout << "Tie" << endl;
    return 0;
}