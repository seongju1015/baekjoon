#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    for (int i = 0; i < n; i++) {
        int candy, human;
        
        cin >> candy >> human;
        cout << "You get " << candy / human << " piece(s) and your dad gets " << candy % human << " piece(s)." << "\n";
    }
 
    return 0;
}