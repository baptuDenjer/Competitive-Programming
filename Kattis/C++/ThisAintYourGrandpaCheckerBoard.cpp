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
	
	int N;
	cin >> N;
	
	string mat[N];
	
	REP(i,0,N)
		cin >> mat[i];
	
	bool flag = false;
	
	REP(i,0,N)
	{
		int cW = 0, cB = 0, conW = 0, conB = 0;
		REP(j,0,N)
			if (mat[i][j] == 'W')
			{
				cW++;
				conB = 0;
				conW++;
				if (conW > 2)
					flag = true;
			}
			else
			{
				cB++;
				conW = 0;
				conB++;
				if (conB > 2)
					flag = true;
			}
		
		if (cW != cB)
			flag = true;
	}
	
	REP(i,0,N)
	{
		int cW = 0, cB = 0, conW = 0, conB = 0;
		REP(j,0,N)
			if (mat[j][i] == 'W')
			{
				cW++;
				conB = 0;
				conW++;
				if (conW > 2)
					flag = true;
			}
			else
			{
				cB++;
				conW = 0;
				conB++;
				if (conB > 2)
					flag = true;
			}
		
		if (cW != cB)
			flag = true;
	}
	
	if (flag)
		cout << 0 << endl;
	else
		cout << 1 << endl;
	
	return 0;
}