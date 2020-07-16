#include<iostream>
using namespace std;

int main()
{
    int n, a, b, c, ans;
    
    cin >> n >> a >> b >> c;
    
    ans = a+b+c;
    if (ans <= 2*n)
        cout << "possible\n";
    else
        cout << "impossible\n";
    return 0;
}