#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    double result;
    if (s[0] == 'A'){
        result = 4;
    }
    else if (s[0] == 'B'){
        result = 3;
    }
    else if (s[0] == 'C'){
        result = 2;
    }
    else if (s[0] == 'D'){
        result = 1;
    }
    else{
        result = 0;
    }

    if (s[1] == '+'){
        result += 0.3;
    }
    else if (s[1] == '-'){
        result -= 0.3;
    }

    printf("%.1f", result);
    
    return 0;
}