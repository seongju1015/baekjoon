#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string number;
    cin >> number;

    // 내림차순 정렬
    sort(number.begin(), number.end(), std::greater<char>());

    cout << number << endl;
    return 0;
}
