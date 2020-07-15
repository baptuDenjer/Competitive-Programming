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
#define RESET(N,value,arr) FOR(i,N) arr[i] = value

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
	int N;
	vd arr;
	cin >> N;
	
	double ans1 = 0.0, ans2 = 0.0, sum = 0.0;
	
	for(int i = 0; i < N; i++)
	{
		double x;
		cin >> x;
		
		arr.pb(x);
		ans1 += (x * pow(.8,i));
	}
	
	sort(arr.begin(), arr.end(), greater<int>());
	
	for(int i = 0; i < N; i++)
	{
		int power = 0;
		double tot = 0.0;
		
		for(int j = 0; j < N; j++)
			if (i != j)
			{
				tot += (arr[j] * pow(.8,power));
				power++;
			}
		sum += tot/5.0;
	}
	
	cout << fixed << setprecision(6);
	cout << ans1/5 << endl;
	cout << sum/N << endl;
	return 0;
}