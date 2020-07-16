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

struct union_find 
{
	vi p;
	union_find(int n): p(n,-1){};
	
	//finding parent
	int find(int x)
	{
		return p[x] < 0 ? x: p[x] = find(p[x]);	
	}	
	
	//join the set
	//find the parent first and merge
	//unite by the rank
	void unite(int x, int y)
	{
		
		int xp = find(x);
		int yp = find(y);
		
		//If the parent is not same
		if (xp != yp)
		{
			if (p[xp] > p[yp])
				xp ^= yp ^= xp ^= yp; //swap(xp,yp);
			
			p[xp] += p[yp];
			p[yp] = xp;	
		}
	}
	
	int size(int x)
	{
		return -p[find(x)];
	}
};

int main()
{
	fast;
	int N, M;
	cin >> N >> M;
	
	//make it 2 times bigger
	union_find uf(N<<1);
	
	REP(i, 0, M)
	{
		int a, b;
		cin >> a >> b;
		
		//a and b connected
		uf.unite(a,b);
	}
	
	bool isConnected = true;
	//find root one 1
	int rootOne = uf.find(1);
	//checking which element has a connection with 1.
	REP(i,2,N+1)
	{
		int rootN =  uf.find(i);
		if (rootN != rootOne)
		{
			cout << i << endl;
			isConnected = false;
		}
	}
	
	if (isConnected)
		cout << "Connected\n";
	return 0;
}