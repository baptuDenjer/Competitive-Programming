#include<iostream>
using namespace std;

#define endl '\n'

int main()
{
	int N,x,max = -100001, min = 100001;
	cin >> N;
	
	
	for(int i = 0; i < N; i++){
		cin >> x;
		max = x > max ? x:max;
		min = x < min ? x:min;
	}
	
	cout << max << " " << min << endl;
	return 0;
}