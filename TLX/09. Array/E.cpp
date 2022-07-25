#include <iostream>
using namespace std;

#define endl '\n'
int main()
{
	long long int a[101][101], b[101][101], c[101][101], n, m, p;
	cin >> n >> m >> p;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < p; j++)
		{
			cin >> b[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < p; j++)
		{
			c[i][j] = 0;
			for (int k = 0; k < m; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < p; j++)
		{
			if (j == p - 1)
			{
				cout << c[i][j] << endl;
			}
			else
			{
				cout << c[i][j] << " ";
			}
		}
	}
}