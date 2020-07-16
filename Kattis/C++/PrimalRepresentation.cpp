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
    ll N;
    while(cin >> N)
    {
        if (N < 0)
            N *= -1, cout << -1 << " ";
        
        mii prime;
        
        while( N % 2 == 0)
            prime[2]++, N /= 2;
        
        for(int i = 3; i <= sqrt(N); i += 2)
            while(N % i == 0)
            {
                prime[i]++;
                N /= i;
            }
        if (N != 1)
            prime[N]++;
        
        for(auto &i: prime)
        {
            if (i.second == 1)
                cout << i.first;
            else
                cout << i.first << "^" << i.second;
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}