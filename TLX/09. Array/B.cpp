#include<iostream>
#include<vector>
using namespace std;

using vi = vector<int>;

#define endl '\n'
#define pb push_back
int main()
{
	vi arr;
	int x;
	
	while(cin >> x)
		arr.pb(x);
	
	for(int i = arr.size()-1; i > -1; i--)
		cout << arr[i] << endl;
		
	return 0;
}