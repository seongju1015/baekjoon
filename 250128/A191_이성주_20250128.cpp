#include <iostream>
using namespace std;

int main() {
    int n = 0;
    int a = 0, b = 0, c = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        c = a + b;
        cout << c << endl;
    }
}