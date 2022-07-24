#include<iostream>
#include<iomanip>
using namespace std;

#define endl '\n'

int main()
{
	double b,h;
	
	cin >> b >> h;
	
	cout << fixed << setprecision(2) << b*h/2 << endl;
	return 0;
}