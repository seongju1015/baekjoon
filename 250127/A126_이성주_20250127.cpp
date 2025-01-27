#include <iostream>
using namespace std;

bool is_hansoo(int num) {
    // 두 자리 이하의 숫자는 모두 한수
    if (num < 100) return true;

    // 각 자리수 추출 및 등차수열 조건 확인
    int hundreds = num / 100;
    int tens = (num / 10) % 10;
    int ones = num % 10;

    return (hundreds - tens) == (tens - ones);
}

int main() {
    int N, count = 0;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        if (is_hansoo(i)) count++;
    }

    cout << count << endl;
    return 0;
}
