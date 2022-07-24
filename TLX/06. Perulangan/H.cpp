#include<iostream>
using namespace std;

#define endl '\n'

int main()
{
	int N,x;
	
	cin >> N >> x;
	
	if (1 % x == 0)
		cout << "*";
	else
		cout << 1;
	for(int i = 2; i <= N; i++)
		if (i % x == 0)
			cout << " *";
		else
			cout << " " << i;
	
	cout << endl;
	return 0;
}