#include<iostream>
using namespace std;

#define endl '\n'

int main()
{
	int N;
	cin >> N;
	
	int x = N & (N-1);
	cout << (x == 0 ? "ya": "bukan") << endl;
	
	return 0;
}