#include <iostream>
using namespace std;

int main(){
    string inputString;
    while(cin >> inputString){
        if(inputString == "0"){
            break;
        }

        int totalWidth = 1; 

        for(int i = 0; i < inputString.size(); i++){
            if(inputString[i] == '1'){
                totalWidth += 3;
            }
            else if(inputString[i] == '0'){
                totalWidth += 5;
            }
            else {
                totalWidth += 4;
            }
        }
        
        cout << totalWidth << endl;
    }

    return 0;
}
