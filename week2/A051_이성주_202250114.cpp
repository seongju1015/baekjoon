#include <iostream>

using namespace std;

int total=0;

int main() {
    string s;
    cin >> s;

    for(int i=0;i<s.size();i++) {
        total+=((int)s[i]-65)/3 + 3; //아스키 코드

        if(s[i] == 'S' ||s[i] == 'V' ||s[i] == 'Y' ||s[i] == 'Z' ){
            total--;
        }
    }
    cout << total;
}
