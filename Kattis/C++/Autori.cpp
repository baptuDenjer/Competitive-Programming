#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main()
{
    fast;
 	
	string st,ans;
	getline(cin,st);
	
	ans += st[0];
	for(int i = 1; i < st.length(); i++)
		if (st[i] == '-')
			ans += st[i+1];
	
	cout <<  ans << endl;
    return 0;
}