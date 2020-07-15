#include <iostream>
using namespace std;

int main()
{
    int x, n, number, sum;
    cin >> x >> n;
    sum = x;
    for(int i = 0; i < n; i++)
    {
        cin >> number;
        sum+=(x-number);
    }
    cout << sum << endl;
    return 0;
}