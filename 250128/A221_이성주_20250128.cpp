#include <iostream>
#include <string>

using namespace std;

int n;

int main() {
    cin >> n;
    while (n--) {
        string input;
        cin >> input;
        cout << ((input.back() % 2) ? "odd" : "even") << endl;
    }
    return 0;
}
