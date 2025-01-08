#include <iostream>
#include <string>

using namespace std;

int main(){
    int a = 0, b = 0, c = 0;
    int sum = 0;
    string num;

    int count[10] = {0};

    cin >> a >> b >> c;

    sum = a * b * c;
    num = to_string(sum);

    for(int i = 0; i < num.length(); i++){
        for(int j = 0; j < 10; j++){
            
            if((num[i] -'0') == j){
                count[j]++;
            }
        }
    }
    
    for(int i = 0; i < 10; i++){
        cout << count[i] <<"\n";
    }

}
