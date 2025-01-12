#include <iostream>
using namespace std;

int main(){
    // N 이랑 현재 상태 입력받기
    int n, temp = 0;
    double good = 0, bad = 0, result1, result2;
    cin >> n >> temp;

    // 확률 입력받기
    double ggood, gbad, bgood, bbad;
    cin >> ggood >> gbad >> bgood >> bbad;

    double condition[4] = {ggood, gbad, bgood, bbad};

    // 현재상태 좋은날일 때
    if(temp == 0){
        good = condition[0];
        bad = condition[1];
    }
    else{
        good = condition[2];
        bad = condition[3];
    }

    for(int i = 0; i < n-1; i++){
        result1 = (good * condition[0]) + (bad * condition[2]);
        result2 = (good * condition[1]) + (bad * condition[3]);
        good = result1;
        bad = result2;
    }

    good = good * 1000;
    bad = bad * 1000;

    cout << (int)good << endl;
    cout << (int)bad << endl;

    return 0;

}
