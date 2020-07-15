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
	string s;
	int scoreA = 0, scoreB = 0;
	int i = 0, j = 0;
	
	cin >> s;
	
	while(i < s.size())
	{
		if (s[i] == 'A')
			scoreA += s[i+1]-'0';
		else
			scoreB += s[i+1]-'0';
		i+=2;
	}
	
	cout << (scoreA > scoreB ? "A" : "B");
	cout << endl; 
	return 0;
}