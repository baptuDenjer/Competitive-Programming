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

double dist(double x1, double y1, double x2, double y2)
{
	return sqrt( (x1-x2)*(x1-x2) + (y1 - y2)*(y1-y2) );
}

int main()
{
	fast;
	double x,y,x1,y1,x2,y2;
	cin >> x >> y >> x1 >> y1 >> x2 >> y2;
	
	double minDistance = dist(x,y,x1,y1);
	
	minDistance = min(minDistance, dist(x,y,x1,y1));
	minDistance = min(minDistance, dist(x,y,x2,y2));
	minDistance = min(minDistance, dist(x,y,x1,y2));
	minDistance = min(minDistance, dist(x,y,x2,y1));
	
	if ( x1 <= x && x <= x2)
		minDistance = min(minDistance, fabs(y-y1)),
		minDistance = min(minDistance, fabs(y-y2));
	if (y1 <= y && y <= y2)
		minDistance = min(minDistance, fabs(x-x1)),
		minDistance = min(minDistance, fabs(x-x2));
		
	cout << fixed << setprecision(1) << minDistance << endl;
	return 0;
}