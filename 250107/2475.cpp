#include <iostream>
using namespace std;

int main(){
    int number[5];
    int sum = 0;
    int result = 0;

    for(int i = 0; i < 5; i++){
        cin >> number[i];
    }

    for(int i = 0; i < 5; i++){
        sum += (number[i] * number[i]);
    }
    
    result = sum % 10;
    cout << result << endl;

    return 0;
}
