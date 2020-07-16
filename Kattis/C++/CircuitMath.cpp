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
    fast
    int N;
    stack<bool> T;
    
    cin >> N;
    
    bool v[N];
    char c;
    
    for(int i = 0; i < N; i++)
        cin >> c, v[i] = (c == 'T') ? 1:0;
    
    string line;
    getline(cin,line);
    getline(cin,line);

    for(int i = 0; i < line.size(); i++)
    {
        
        if (line[i] == ' ')
            continue;
        
        if (line[i] >= 'A' && line[i] <= 'Z')
            T.push(v[line[i] - 'A']);
        else
        {   
            bool val,A, B;
            
            if (line[i] != '-')
            {
                A = T.top(); T.pop();
                B = T.top(); T.pop();
    
                if (line[i] == '*')
                    val = A && B;
                else if (line[i] == '+')
                    val = A || B;
                
                T.push(val);
            }
            else
                A = T.top(), T.pop(), T.push(!A); 
        }
    }
    
    cout << (!T.top()?'F':'T')  << endl;
    return 0;
}