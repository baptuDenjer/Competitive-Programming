#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdio>
using namespace std;

void min_max(int &a, int &b);

int main()
{
	int n, m;
	cin >> n >> m;
	min_max(n,m);
	for(int i = n+1; i < m+2; i++)
		cout << i << endl;
	return 0;
}

void min_max(int &a, int &b)
{
	int c = a+b;
	if (a > b)
	{
		a = c-a;
		b = c-b;
	}
}