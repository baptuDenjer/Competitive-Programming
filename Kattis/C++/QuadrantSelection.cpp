#include <iostream>
using namespace std;

int main()
{   int x,y;
    cin >> x >> y;

    int kuadran;

    if (x > 0 && y > 0)
      kuadran = 1;
    else if (x > 0 && y < 0)
      kuadran = 4;
    else if (x < 0 && y < 0)
      kuadran = 3;
    else if (x < 0 && y > 0)
      kuadran = 2;
    

    cout << kuadran << endl;
    return 0;
}