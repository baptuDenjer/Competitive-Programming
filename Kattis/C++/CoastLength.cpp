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

int main()
{
    fast;
    int N, M, sum = 0;
    
    cin >> N >> M;
    
    char map[N+2][M+2];
    
    //RESET
    for(int i = 0; i < N+2; i++)
        for(int j = 0; j < M+2; j++)
            map[i][j] = '0';
        
    for(int i = 1; i <= N; i++)
        for(int j = 1; j <= M; j++)
            cin >> map[i][j];
                
    queue<ii> BFS;
    int dx[] = {1,-1,0,0}, dy[] = {0,0,1,-1};
    
    BFS.push({0,0});
    
    //FILL
    while(!BFS.empty())
    {
        int x = BFS.front().first;
        int y = BFS.front().second;
        BFS.pop();
        
        if (x < 0 || y < 0 || x >= N+2 || y >= M+2)
            continue;
        if (map[x][y] == '1')
            sum++;
        if (map[x][y] == '0')
        {
            map[x][y] = '#';
            for(int i = 0; i < 4; i++)
                BFS.push({x+dx[i], y+dy[i]});
        }
    
    }
    
    cout << sum << endl;
    
    return 0;
}