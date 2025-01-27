#include <iostream>
using namespace std;

int main(){
    int n = 0;
    cin >> n;

    if(n == 1){
        return 0;
    }

    for(int i = 2; i <= n; i++){
        while (n % i == 0) {
            cout << i << endl;
            n /= i;
        }
        
    }

    return 0;
}
