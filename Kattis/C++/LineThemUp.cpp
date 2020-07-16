#include <iostream>
using namespace std;

int main()
{
    int tc,dec = 0, inc = 0;
    string name, namex;

    cin >> tc;
    cin >> name;
    
    for(int i = 1; i < tc; i++)
    {
        cin >> namex;
        if (name < namex) inc++;
        else
            dec ++;
        name = namex;
    }
    
    if ( (inc > 0) && (dec == 0) ) cout << "INCREASING\n";
    else
    if ( (inc == 0) && (dec > 0) ) cout << "DECREASING\n";
    else
        cout << "NEITHER\n";
    return 0;
}