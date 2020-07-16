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

bool memo[7];

bool isPrime(int n)
{
    if (n < 2) return false;
    if (n < 4) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    if (n < 25) return true;
    for(int i = 5; i*i <= n; i+=6)
        if (n % i == 0 || n % (i+2) == 0) return false;
    return true;
}
void search(string curr, string &num, set<int> &prime)
{
    ss convert;
    //cout << "ini curr: " << curr << endl;
    for(int i = 0; i < num.size(); i++)
    {
        int p;
        convert << curr;
        convert >> p;
        if (isPrime(p))
            prime.insert(p);
        //cout << curr << endl;
        
        if (!memo[i])
        {
            string test = curr + num[i];
            memo[i] = true;
            search(test,num,prime);
            memo[i] = false;    
        }
        
    }
}

int main()
{
    fast;
    
    int T, answer = 0;
    cin >> T;

    while(T--)
    {
        memset(memo,0,sizeof memo);
        string num;
        set<int> prime;
        
        cin >> num;
    
        sort(num.begin(), num.end());
        //cout << "sorted(num): " << num << endl;
        for(int i = 0; i < num.size(); i++)
        {
            string x = string(1,num[i]);
            memo[i]=true;
            search(x,num, prime);
            memo[i]=false;
        }
        
        cout << prime.size() << endl;
    }
    return 0;
}