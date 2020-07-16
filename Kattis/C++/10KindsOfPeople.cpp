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

struct board
{
    int value, region = -1;
    bool isVisited = false;
};

int main()
{   
    fast
    int R, C, Q, x1, y1, x2, y2, color = 0;
    int dx[] = {0,0,1,-1}, dy[] = {1,-1,0,0};

    cin >> R >> C;
    board mat[R+1][C+1];
    for(int i = 1; i <= R; i++)
    {
        string s;
        cin >> s;
        for(int j = 0; j < C;  j++)
        {
            mat[i][j+1].value = s[j] - '0';
            mat[i][j+1].isVisited = 0;
        }
    }
    
    //floodfill
    for(int i = 1; i < R+1; i++)
        for(int j = 1; j < C+1; j++)
        {
            if (mat[i][j].region == -1)
            {
                queue<ii> BFS;
                int val = mat[i][j].value;
                BFS.push({i,j});
                while(!BFS.empty())
                {
                    ii P = BFS.front();
                  
                    if (P.first < 1 || P.second < 1 || P.first > R || P.second > C || mat[P.first][P.second].value != val || mat[P.first][P.second].isVisited)
                        {
                            BFS.pop();
                            continue;
                        }
                    mat[P.first][P.second].isVisited = true;
                    mat[P.first][P.second].region = color;
                    for(int k = 0; k < 4; k++)
                    {
                        x1 = P.first + dx[k];
                        y1 = P.second + dy[k];  
                        BFS.push({x1,y1});
                    }
                    BFS.pop();
                }
                color++;
            }
        }
            
    cin >> Q;
    for(int i = 0; i < Q; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        if (mat[x1][y1].region != mat[x2][y2].region)
            cout << "neither\n";
        else if (mat[x1][y1].value == 1)
           cout << "decimal\n";
        else
            cout << "binary\n";
    }
    return 0;
}