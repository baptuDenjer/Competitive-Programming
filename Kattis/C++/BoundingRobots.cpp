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
    int R, C;
    
    while(cin >> R >> C && (R+C))
    {
        int N;
        ii robot(0,0), real(0,0);
        cin >> N;
        
        while(N--)
        {
            char c;
            int t;
            
            cin >> c >> t;
            if (c == 'u')
            {
                real.second = min(C-1, real.second + t);
                robot.second += t;
            }
            else if (c == 'd')
            {
                real.second = max(0,real.second - t);
                robot.second -= t;
            }
            else if (c == 'r')
            {
                real.first = min(R-1, real.first + t);
                robot.first += t;
            }
            else
            {
                real.first = max(0,real.first - t);
                robot.first -= t;
            }
        }
        
        cout << "Robot thinks " << robot.first << " " << robot.second << endl;
        cout << "Actually at " << real.first << " " << real.second << endl << endl;
    }
    return 0;
}
