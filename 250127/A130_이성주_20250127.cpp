#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
    int k, num, sum = 0;
    cin >> k;

    stack<int> s;

    for (int i = 0; i < k; i++) {
        cin >> num;
        if (num != 0) {
            s.push(num);
        } else {
            s.pop();
        }
    }

    // 스택에 남아있는 값들의 합 계산
    while (!s.empty()) {
        sum += s.top();
        s.pop();
    }

    cout << sum;
    return 0;
}
