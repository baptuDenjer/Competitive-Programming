#include <iostream>
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    fast;
    
    int n, counter = 0, num;
    
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> num;
        if (num < 0)
            counter++;
    }
    cout << counter << endl;
    return 0;
}