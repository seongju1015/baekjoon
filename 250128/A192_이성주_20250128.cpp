#include <iostream>
using namespace std;

int main(){
    int n = 0, result = 0;
    cin >> n;

    for(int i = 1; i <= n; i++){
        result = result + i;
    }

    cout << result;

    return 0;
}