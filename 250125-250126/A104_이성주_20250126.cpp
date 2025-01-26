#include <iostream>
#include <vector>

using namespace std;

int main(){
    int num = 0, max = 0, result = 0;
    cin >> num;

    vector<int> cost(num);

    for(int i = 0; i < num; i++){
        cin >> cost[i];
        if(cost[i] > max){
            max = cost[i];
        }
    }

    // result에 다 더해서 최대값 빼기
    for(int i = 0; i < num; i++){
        result += cost[i];
    }
    result -= max;  

    cout << result;
    
    return 0;
}
