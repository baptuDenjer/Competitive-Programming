#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<utility>
#define endl '\n'
using namespace std;
using dd = pair<double,double>;
using vd = vector<dd>;


int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
	int N;
	
	cin >> N;

	vd v(N);
	for(int i = 0; i < N; i++)
		cin >> v[i].first >> v[i].second;
	
	sort(v.begin(), v.end());
	double L = (1e9 + 1) * -1;
	for(int i = 0; i < N-1; i++)
		{
			double calc = abs(v[i].second- v[i+1].second)/abs(v[i].first - v[i+1].first);	
			L = max(L, calc);
		}
	
	cout << fixed << setprecision(4) << L << endl;


	return 0;
}