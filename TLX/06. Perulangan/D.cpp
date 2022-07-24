#include<iostream>
using namespace std;

#define endl '\n'

int main()
{
	int N, sum = 0;
	
	while(cin >> N)
		sum += N;
	
	cout << sum << endl;
	
	return 0;
}