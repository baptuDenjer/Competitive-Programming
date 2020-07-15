#include<iostream>
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main()
{
    fast;
    int n, m;
    cin >> n >> m;
    cout << n*(m-1)+ 1 << endl;
    return 0;
}