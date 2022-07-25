#include<iostream>
#include<cstdlib>
using namespace std;

#define endl '\n'

int main()
{
	int N;
	
	cin >> N;
	
	for(int i = 0; i < N; i++)
	{
		
		for(int j = 0; j < N-i-1; j++)
			cout << " ";
		for(int j = 0; j < i+1; j++)
			cout << "*";
		cout << endl;
	}
	return 0;
}