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
	
	int N;	
	cin >> N;
	
	int arr[N];
	FOR(i,N)
		cin >> arr[i];
	
	sort(arr,arr+N);
	
	long wLow = 0, wHigh = 0, low = 0, high = N-1;
	
	bool flag = false;
	
	while(low != high)
	{
		if (wLow < wHigh)
			wLow += arr[low],low++;
		else if (wLow > wHigh)
			wHigh+= arr[high] , high--;
		else
			wLow += arr[low], low++;
	}
	
	if (wLow < wHigh)
		cout << arr[low]+1 << endl;
	else
		cout << arr[low] << endl;	
	return 0;
}