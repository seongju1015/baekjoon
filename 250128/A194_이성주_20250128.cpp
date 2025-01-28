#include <iostream>
using namespace std;


int main() {
	int n = 0;
	int a = 0, b = 0, c = 0;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> a >> b;
		c = a + b;

		cout << "Case #" << i << ": " << a << " + " << b << " = " << c << endl;
	}
}