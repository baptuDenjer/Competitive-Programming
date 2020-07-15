#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdio>
using namespace std;

bool cup[] = {true, false, false};
void swap(int a, int b)
{
	bool c;
	c = cup[a]; cup[a] = cup[b]; cup[b] = c;
}

int main()
{
	string ways;
	cin >> ways;
	for(int i = 0; i < ways.length(); i++)
	{
		switch (ways[i])
		{
			case 'A': swap(0,1); break;
			case 'B': swap(1,2); break;
			case 'C': swap(0,2); break;	
		}
	}
	
	for(int i = 0; i < 3; i++)
		if (cup[i]) cout << i+1 << endl;
}