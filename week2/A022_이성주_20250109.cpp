#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int Y = 0, M = 0;

    while (N--) {
        int T;
        cin >> T;
        Y += ((T / 30) + 1) * 10; // Y 요금 계산
        M += ((T / 60) + 1) * 15; // M 요금 계산
    }

    if (Y < M)
        cout << "Y " << Y << "\n";
    else if (Y > M)
        cout << "M " << M << "\n";
    else
        cout << "Y M " << Y << "\n";

    return 0;
}
