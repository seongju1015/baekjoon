#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool compare(const pair<int, string>& a, const pair<int, string>& b) {
    return a.first < b.first; // 나이 기준 오름차순 정렬
}

int main() {
    int n = 0;
    cin >> n;

    vector<pair<int, string>> v;

    for (int i = 0; i < n; i++) {
        int age;
        string name;
        cin >> age >> name;
        v.push_back({age, name});
    }

    // 안정 정렬: 사용자 정의 비교 함수 사용
    stable_sort(v.begin(), v.end(), compare);

    for (const auto& p : v) {
        cout << p.first << " " << p.second << "\n";
    }

    return 0;
}
