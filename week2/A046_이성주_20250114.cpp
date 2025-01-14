#include <iostream>
#include <string>
using namespace std;

int N;
int alphabet[26];
string s = "abcdefghijklmnopqrstuvwxyz";

int main(void) {
    bool check;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string input;
		cin >> input;
		alphabet[input[0] - 'a']++;
	}

    check = true;

	for (int i = 0; i < 26; i++) {
		if (alphabet[i] >= 5) {
			cout << s[i];
			check = false;
		}
	}
	if (check) cout << "PREDAJA";
}