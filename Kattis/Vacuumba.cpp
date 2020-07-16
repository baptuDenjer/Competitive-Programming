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
	fast
	int T;
	cin >> T;
	while(T--)
	{
		int M;
		cin >> M;
		
		//ori, at 0,0 and facing upward 90 degree relative to x-axis
		double x = 0, y = 0, ori = 90;
		REP(i,0,M)
		{
			double rot, len;
			cin >> rot >> len;
			
		    ori += rot;
			y += len * sin(ori*PI/180);
			x += len * cos(ori*PI/180);
		}
		
		cout << fixed << setprecision(8) << x << " " << y << endl;
	}
	return 0;
}