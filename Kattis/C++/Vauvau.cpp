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
#define endl '\n'
using namespace std;

#define pb push_back
#define pf push_front
#define umap unordered_map
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define uset unordered_set
#define REP(i,a,b) for(int i = a; i < b; i++)

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

int main()
{
    string dict[] = {"none\n", "one\n", "both\n"};
    int dog[4];
    for(int i = 0; i < 4; i++)
        cin >> dog[i];
    
    int people[3];
    for(int i = 0; i < 3; i++)
        cin >> people[i];
    
    
    for(int i = 0; i < 3; i++)
    {
        int count = 0;
        for(int j = 0; j < 4; j+=2)
        {
            int x = people[i] % (dog[j]+dog[j+1]);
            if (x > 0 && x <= dog[j])
                count++;
        }
        cout << dict[count];
    }
    
    return 0;
}