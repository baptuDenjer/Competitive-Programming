#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <map>
using namespace std;

int main()
{
    int a1,a2,b1,b2;
    double c1 = 0, c2 = 0;
    vector<int> emma, gunnar;
    
    cin >> a1 >> b1 >> a2 >> b2;
    
    for(int i = a1; i <= b1; i++)
        for(int j = a2; j<= b2; j++)
            gunnar.push_back(i+j);
    
    cin >> a1 >> b1 >> a2 >> b2;
    
    for(int i = a1; i <= b1; i++)
        for(int j = a2; j<= b2; j++)
            emma.push_back(i+j);
            
    for(int i = 0; i < gunnar.size(); i++)
        for(int j = 0; j < emma.size(); j++)
            if (gunnar[i] > emma[j]) c1++;
            else
            if (gunnar[i] < emma[j]) c2++;
            else
            {
                c1++; c2++;
            }
            
    if (c1 > c2) cout << "Gunnar" << endl; else
    if (c1 < c2) cout << "Emma" << endl; else
    cout << "Tie" << endl;
    return 0;
}