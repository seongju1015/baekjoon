#include <iostream>
#include <vector>
using namespace std;

int main() {
    int max_count = 0;
    int array[10] = {0}; 
    string number;

    cin >> number;
    
    for (int i = 0; i < number.length(); i++) {
        int digit = number[i] - '0';  // 숫자변환
        if (digit == 6 || digit == 9) {
            array[6]++;  // 6과 9는 같은 숫자로 취급
        } else {
            array[digit]++;
        }
    }

    // 6과 9의 빈도 합산 후 세트 개수 계산
    array[6] = (array[6] + 1) / 2;  

    // 가장 많이 등장한 숫자의 빈도 찾음
    for (int i = 0; i < 10; i++) {
        if (array[i] > max_count) {
            max_count = array[i];
        }
    }

    cout << max_count << endl;
    
    return 0;
}
