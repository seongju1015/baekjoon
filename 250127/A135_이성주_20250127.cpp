#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> book;
    int len;
    string str, res;
    cin >> len;

    for (int i = 0; i < len; i++) {
        cin >> str;
        book[str]++; // 책의 갯수 측정
    }

    int max = 0; // 최대 갯수 변수
    for (const auto& entry : book) {
        if (entry.second > max) { // 더 많이 나온 책 찾기
            max = entry.second;
            res = entry.first;
        }
    }

    cout << res;
}
