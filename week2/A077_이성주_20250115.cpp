#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// 사용자 정의 비교 함수 (내림차순 정렬)
bool compare(const pair<int, int>& a, const pair<int, int>& b) {
    return a.first > b.first; // 점수를 기준으로 내림차순
}

int main() {
    vector<pair<int, int>> scores(8);

    for (int i = 0; i < 8; i++) {
        cin >> scores[i].first;  
        scores[i].second = i + 1; 
    }

    // 내림차순 정렬
    sort(scores.begin(), scores.end(), compare);

    int sum = 0;
    vector<int> indices;

    // 상위 5개 점수 선택
    for (int i = 0; i < 5; i++) {
        sum += scores[i].first;         // 점수 합계
        indices.push_back(scores[i].second); // 인덱스 저장
    }

    // 오름차순으로 정렬
    sort(indices.begin(), indices.end());

    cout << sum << "\n";
    for (int i = 0; i < 5; i++) {
        cout << indices[i] << " ";
    }
    cout << "\n";

    return 0;
}
