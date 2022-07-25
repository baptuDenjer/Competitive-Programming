#include<iostream>
#include<cmath>
using namespace std;

#define endl '\n'
int main()
{
	int N, x;
	
	cin >> N;
	for(int i = 0; i < N; i++)
	{
		cin >> x;
		int cnt = 0;
		int tmpX = x/2;
		
		for(int j = 1; j < tmpX; j++)
		{
			if (x % j == 0 && j!=1 && j!=tmpX)
			{
				cnt++;
				if (cnt > 2)
					break;
			}
		}
		
		if (cnt <= 2)
			cout << "YA";
		else
			cout << "BUKAN";
		
		cout << endl;
	}
	return 0;
}