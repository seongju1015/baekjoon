#include <iostream>

using namespace std;

int main() {
  int n = 0;
  int array[101];
  int v = 0, result = 0;

  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> array[i];
  }

  cin >> v;

  for(int i = 0; i < n; i++) {
    if(array[i] == v) 
      result++;
  }

  cout << result;

  return 0;
}