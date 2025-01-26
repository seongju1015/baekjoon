#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    int t;
    string word;
    cin >> t;
 
    for (int i = 0; i < t; i++) {
        int arr[26] = { 0 }, ans = 0;
        cin >> word;
 
        for (int j = 0; j < word.length(); j++) {
            arr[(word[j] - 'A')]++;
        }
 
        for (int j = 0; j < 26; j++) {
            if (arr[j] == 0) {
                ans += j + 'A';
            }
        }
        cout << ans << "\n";
    }
 
    return 0;
}
 