#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int len = 0, height = 0, width = 0;
    
    cin >> len >> height >> width;
    
    cout << (int)(len / sqrt(height*height + width*width) * height) << " " <<(int)(len / sqrt(height*height + width*width) * width)<<"\n";

    return 0;
}