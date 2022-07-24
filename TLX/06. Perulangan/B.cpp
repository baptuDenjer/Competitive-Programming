#include<iostream>
using namespace std;

#define endl '\n'

int main()
{
	int N, n, sum = 0;
	cin >> N;
	
	for(int i = 0; i < N; i++)
		cin >> n, sum += n;
	
	cout << sum << endl;
	return 0;
}