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

double dist(dd p1, dd p2)
{
    return sqrt( pow(p1.first - p2.first,2) + pow(p1.second - p2.second, 2));
}

int main()
{
    fast
    int N;
    
    cin >> N;
    vector<dd> points(N);
    vb memo(N,false);
    vd tour(N);
    
    for(int i = 0; i < N; i++)
       cin >> points[i].first >> points[i].second;
    
    memo[0] = true;
    tour[0] = 0;
    for(int i = 1; i < N; i++)
    {
        double currentBest = -1;
        for(int j = 0; j < N; j++)
            if (!memo[j] && (currentBest == -1 || dist(points[i-1], points[j]) < dist(points[i-1],points[currentBest])))
                currentBest = j;
            
        tour[i] = currentBest;
        memo[currentBest] = true;
    }
    
    for(auto &i: tour)
        cout << i << endl;
    return 0;
}