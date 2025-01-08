#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n = 0;
    cin >> n;

    vector<int> array1(n);
    vector<int> array2(n);

    for (int i = 0; i < n; i++) {
        cin >> array1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> array2[i];
    }

    // array1 오름차순 정렬
    sort(array1.begin(), array1.end());

    // array2 내림차순 정렬
    sort(array2.begin(), array2.end(), greater<int>());

    int result = 0;

    // 각 인덱스의 곱을 합산
    for (int i = 0; i < n; i++) {
        result += array1[i] * array2[i];
    }

    cout << result << endl;

    return 0;
}
