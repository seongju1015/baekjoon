#include <iostream>
using namespace std;

int main() {
	
	int num, score;
	string s;
	int temp;

	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> s;
		
		score = 0;
		temp = 1;

		for (int i = 0; i < s.length(); i++) {
			if (s[i] == 'O') score += temp++;
			else if (s[i] == 'X') temp = 1;
		}

		cout << score << '\n';
	}


	return 0;
}