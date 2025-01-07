#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    int testcase = 0;

    cin >> testcase;

    for (int i = 0; i < testcase; i++) {
        int st_num = 0;
        cin >> st_num;

        vector<float> scores(st_num);
        float total = 0.0;

        for (int j = 0; j < st_num; j++) {
            cin >> scores[j];
            total += scores[j];
        }

        float average = total / st_num; 

        int count = 0;
        for (int j = 0; j < st_num; j++) {
            if (scores[j] > average) {
                count++;
            }
        }

        float percentage = (static_cast<float>(count) / st_num) * 100;

        cout << fixed << setprecision(3) << percentage << "%" << endl;
    }

    return 0;
}
