#include<iostream>
using namespace std;

#define endl '\n'

int main()
{
	int n;
	
	cin >> n;
	if (n > 9999)
		cout << "puluhribuan";
	else if (n > 999)
		cout << "ribuan";
	else if (n > 99)
		cout << "ratusan";
	else if (n > 9)
		cout << "puluhan";
	else
		cout << "satuan";
	
	cout << endl;
	return 0;
}