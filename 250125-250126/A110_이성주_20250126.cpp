#include <iostream>

using namespace std;

int N, remain, ans;
int money[6] = { 500, 100, 50, 10, 5, 1 };

int main(void) {
    cin >> N;

    remain = 1000 - N;

    for (int i = 0; i < 6; i++) {
        if (remain >= money[i]) {
            int num = remain / money[i];
    
            remain %= (money[i] * num);
            ans += num;
        }
    }

    cout << ans << endl;
}
