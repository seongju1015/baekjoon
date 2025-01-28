#include <iostream>
#include <string>
#include <vector>

using namespace std;

string plaintext;
string encryptionKey;
vector<char> result;

int main() {
    getline(cin, plaintext);
    getline(cin, encryptionKey);

    const char* plaintextArray = plaintext.c_str();
    const char* keyArray = encryptionKey.c_str();

    for (int i = 0; i < plaintext.size(); i++) {
        if (plaintextArray[i] == ' ') {
            result.push_back(plaintextArray[i]);
            continue;
        }

        char encryptedChar = plaintextArray[i] - (keyArray[i % encryptionKey.size()] - 'a' + 1);
        if (encryptedChar < 'a') {
            encryptedChar += 26;
        }

        result.push_back(encryptedChar);
    }

    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
    }
}
