#include <iostream>
using namespace std;

int main() {
    int T;
    int A, B;
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> A >> B;
        
        // A와 B의 최대공약수 구하기 (유클리드 알고리즘)
        int x = A, y = B;
        while (y != 0) {
            int temp = y;
            y = x % y;
            x = temp;
        }
        
        // 최소공배수는 (A * B) / GCD
        cout << A * B / x << "\n";
    }

    return 0;
}
