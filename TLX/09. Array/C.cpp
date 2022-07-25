#include<iostream>
using namespace std;

#define endl '\n'
int main()
{
	int N,x,count = -1, currentMod = -1;
	cin >> N;
	
	int mod[1001];
	
	for(int i = 1; i < 1001; i++)
		mod[i] = 0;
	
	for(int i = 0; i < N; i++)
		cin >> x, mod[x]++;
	
	for(int i = 1; i < 1001; i++)
		if (count <= mod[i] && i > currentMod)
			currentMod = i, count = mod[i];
	cout << currentMod << endl;
	return 0;
}