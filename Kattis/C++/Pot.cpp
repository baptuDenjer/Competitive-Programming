#include<iostream>
#include<cmath>
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main()
{
    fast;
 	
	long ans = 0;
	int n;
	cin >> n;
	
	for(int i = 1; i <= n; i++)
	{
		int num;
		cin >> num;
		
		ans += pow(num/10,num%10);	
	}   

	cout << ans << endl;
    return 0;
}