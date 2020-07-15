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
#include<sstream>
#include<unordered_set>
#include<fstream>
#define endl '\n'
using namespace std;

#define pb push_back
#define pf push_front
#define umap unordered_map
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define uset unordered_set
#define FOR(i,a) for(int i = 0; i < a; i++)
#define PI acos(-1)
#define uset unordered_set
#define fi first
#define se second
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
using vvi = vector<vi>;

int main()
{
	fast
	int N, M;
	
	cin >> N >> M;
	
	vi G[N+1];
	bool memo[N+1];
	memset(memo,false,sizeof memo);
	for(int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;
		
		G[a].pb(b);
		G[b].pb(a);
	}
	
	queue<ii> BFS;

	BFS.push({1,0});
	
	while(!BFS.empty())
	{
		if (BFS.front().fi == N)
		{
			cout << BFS.front().se - 1 << endl;
			return 0;
		}
		else
		{
			for(auto x: G[BFS.front().fi])
				if (!memo[x])
				{
					memo[x] = true;
					BFS.push({x,BFS.front().se+1});
				}
		}
		BFS.pop();
	}
	return 0;
}