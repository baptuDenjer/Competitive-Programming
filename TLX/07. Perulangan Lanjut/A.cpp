#include<iostream>
using namespace std;

#define endl '\n'

int main()
{
	int N;
	cin >> N;
	
	for(int i = 1; i <= N; i++)
		if (i % 10 == 0)
			continue;
		else if (i == 42){
			cout << "ERROR" << endl;
			break;
		}
		else
			cout << i << endl;
		
	return 0;
}