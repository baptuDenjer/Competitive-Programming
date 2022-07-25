#include<iostream>
using namespace std;

#define endl '\n'


//is_prime function by SuperDewd
bool isPrime(int x)
{
	if (x < 2)
		return false;
	if (x < 4)
		return true;
	if (x % 2 == 0 || x % 3 == 0)
		return false;
	if (x < 25)
		return true;
	for(int i = 5; i*i <= x; i+=6)
		if (x % i == 0 || x % (i+2) == 0)
			return false;
	return true;
}

int main()
{
	int N, x;
	cin >> N;
	
	for(int i = 0; i < N; i++)
	{
		cin >> x;
		if (isPrime(x))
			cout << "YA";
		else
			cout << "Bukan";
		cout << endl;
	}
	return 0;
}