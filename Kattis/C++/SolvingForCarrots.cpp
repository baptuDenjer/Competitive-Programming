#include<iostream>
#include<cmath>
#include<string>
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main()
{
    fast;
 	
	int m, n;
	
	cin >> m >> n;
	
	string s, dummy;
	getline(cin,dummy);
	
	for(int i = 0; i < m; i++ )
		cin >> s;
	
	cout << n << endl;
    return 0;
}