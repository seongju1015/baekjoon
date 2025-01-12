#include <iostream>
using namespace std;

int main(){

    // n = 가로 , m = 세로
    int n = 0, m = 0;
    int result = 0;

    cin >> n >> m;

    // 2,2 -> 3 / 3,3 -> 8 / 4,4 -> 15 즉 (m-1)* n + (n-1)
    result = (m-1)* n + (n-1);

    cout << result << endl;

    return 0;
}