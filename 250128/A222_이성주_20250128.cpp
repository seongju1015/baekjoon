#include <iostream>
using namespace std;
 
int factorial(int t) {
    int result = 1;
    for (int i = t; i > 0; i--) {
        result *= i;
    }
    return result;
}
 
int main() {
    int n, k;
    cin >> n >> k;
 
    int result = factorial(n) / (factorial(k) * factorial(n - k));
 
    cout << result;
}
