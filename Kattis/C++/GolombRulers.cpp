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
	fast
	string input;
	while(getline(cin,input))
	{
		int tmp;
		vi arr;
		ss convert(input);
		while(convert >> tmp)
			arr.pb(tmp);
		
		sort(arr.begin(), arr.end());
		
		int max = arr[arr.size()-1];
		int N = arr.size();
		bool memo[2001];
		
		RESET(2001,false,memo);
		
		bool isValid = true;
		for(int i = 0; i < N && isValid; i++)
			for(int j = i+1; j < N && isValid; j++)
				{
					int x = arr[j] - arr[i];
					
					if (!memo[x])
						memo[x] = true;
					else
						isValid = false;
				}
		if (!isValid)
			cout << "not a ruler" << endl;
		else
		{
			bool isPerfect = true;
			vi missing;
			
			for(int i = 1; i <= max; i++)
				if (!memo[i])
					missing.pb(i), isPerfect = false;
				
			if (isPerfect)
				cout << "perfect" << endl;
			else
			{
				cout << "missing";
				for(auto x: missing)
					cout << " " << x;
				cout << endl;
			}
		}
	}
	return 0;
}