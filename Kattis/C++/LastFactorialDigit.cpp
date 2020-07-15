#include<iostream>
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    fast;
    int n, tc;
    cin >> tc;
    
    while(tc--)
    {
        
        cin >> n;
        switch(n)
        {
            case 1: cout << 1 << endl; break;
            case 2: cout << 2 << endl; break;
            case 3: cout << 6 << endl; break;
            case 4: cout << 4 << endl; break;
            default: cout << 0 << endl; break;
        }
    }
    return 0;
}