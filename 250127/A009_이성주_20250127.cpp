#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    if (s.length() != 4 && s.length() != 6) return false; // 길이가 4 또는 6이 아니면 false

    // 문자열이 숫자인지 확인
    for (char c : s) {
        if (c < '0' || c > '9') return false; // 숫자가 아니면 false
    }

    return true; // 모든 조건을 만족하면 true
}
