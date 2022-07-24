#include<iostream>
using namespace std;

#define endl '\n'

int main()
{
	int n;
	cin >> n;
	
	if (n > 0)
		cout << "positif";
	else if (n < 0)
		cout << "negatif";
	else
		cout << "nol";
	
	cout << endl;
	return 0;
}