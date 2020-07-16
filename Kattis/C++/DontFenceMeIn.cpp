#include<iostream>
#include<map>
#include<vector>
#include<set>
#include<unordered_set>
#include<unordered_map>
#include<list>
#include<string>
#include<algorithm>
#include<cmath>
#include<iterator>
#include<cstring>
#include<stack>
#include<queue>
#include<bitset>
#include<climits>
#include<sstream>
#include<iomanip>
#define endl '\n'
using namespace std;

#define pb push_back
#define pf push_front
#define umap unordered_map
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define uset unordered_set
#define REP(i,a,b) for(int i = a; i < b; i++)
#define PI acos(-1)
#define Euler exp(1)
#define fi first
#define se second
#define RESET(N,value, arr) REP(i,0,N) arr[i] = value

using vi = vector<int>;
using vs = vector<string>;
using ss = stringstream;
using sets = set<string>;
using msi = map<string,int>;
using msvs = map<string,vs>;
using ll = long long;
using dd = pair<double,double>;
using vb = vector<bool>;
using vd = vector<double>;
using ii = pair<int,int>;
using vii = vector<ii>;
using usets = unordered_set<string>;
using vdd = vector<dd>;
using mci = map<char,int>;
using vll = vector<ll>;
using mii = map<int,int>;
using li = list<int>;
using msli = map<string,li>;
using msvi = map<string,vi>;
using umsvi = umap<string,vi>;
using vf = vector<float>;

int B, K;
int arr[3000][3000];

void color(int x, int y)
{
	if (arr[x][y] == 0 && x < B*3 && y < K*3 && x > -1 && y > -1)
	{
		arr[x][y] = 2;
		color(x+1,y);
		color(x,y+1);
		color(x-1,y);
		color(x,y-1);
	}
}

int main()
{
	fast
	memset(arr,0,sizeof arr);	
	cin >> B >> K;
	
	char mat[B][K];
	for(int i = 0; i < B; i++)
		for(int j = 0; j < K; j++)
			cin >> mat[i][j];
	
	int dots[3][3] = {0,0,0,0,0,0,0,0,0};
	int slas[3][3] = {0,0,1,0,1,0,1,0,0};
	int back[3][3] = {1,0,0,0,1,0,0,0,1};
	
	int x = 0, y = 0;
	for(int i = 0; i < B; i++)
		for(int k = 0; k < 3; k++)
		{
		
			for(int j = 0; j < K; j++)
				for(int l = 0; l < 3; l++)
				{
					switch (mat[i][j])
					{
						case '.':
							arr[x][y] = dots[k][l];
							break;
						case '/':
							arr[x][y] = slas[k][l];
							break;
						case '\\':
							arr[x][y] = back[k][l];
							break;
					}
					y++;
					y %= K*3;
				}
			x++;
		}

	
	for(int i = 0; i < K*3; i++)
		if (arr[0][i] == 0)
			color(0,i);
		else if (arr[ (B*3)- 1] [i] == 0)
			color( (B*3)-1,i );
	
	for(int i = 0; i < B*3; i++)
		if (arr[i][0] == 0)
			color(i,0);
		else if (arr[i][ (K*3)-1 ] == 0)
			color(i, (K*3)-1);
	
	int count = 0;
	for(int i = 0; i < B*3; i++)
		for(int j = 0; j < K*3; j++)
			if (arr[i][j] == 0)
			{
				color(i,j);
				count++;
			}
	
	cout << count << endl;

	return 0;
}