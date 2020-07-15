#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;


int reverse(int n)
{
	int reverse = 0;
	while(n > 0)
	{
		reverse = reverse * 10 + n %10;
		n = n / 10;
	}
	return reverse;
}

int main()
{
 	int a, b;
 	cin >> a >> b;
 	
 	int bRev = reverse(b);
 	int aRev = reverse(a);
 	
 	cout << max(aRev,bRev) << endl;
      return 0;
}
