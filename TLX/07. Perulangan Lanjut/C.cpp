#include<iostream>
using namespace std;

#define endl '\n'

int main()
{
	int N, c = 0;
	cin >> N;
	
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < i+1; j++)
			cout << c % 10, c++;
		cout << endl;
	}
	return 0;
}