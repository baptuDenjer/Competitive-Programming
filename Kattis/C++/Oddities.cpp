#include<iostream>
#include<cmath>
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main()
{
    fast;
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        
        cout << num;
        if (abs(num) % 2 == 0)
            cout << " is even";
        else
            cout << " is odd";
        cout << endl;
    }
    return 0;
}