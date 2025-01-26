#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string before;
    int num = 0;

    cin >> before;
    num = before.length();
    vector <string> after(num);

    // 첫 번째는 그대로 저장
    after[0] = before;

    // 나머지
    for(int i = 1; i < num; i++){
        before.erase(0, 1);
        after[i] = before;
    }

    // 사전순으로 정렬
    sort(after.begin(), after.end());

    // 결과 
    for(int i = 0; i < num; i++){
        cout << after[i] << endl;
    }

    return 0;
}
