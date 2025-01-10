#include <iostream>
using namespace std;

int main(){
    int n = 0, first = 0;

    cin >> n;
    cin >> first;

    if(n > 5){ // 문 개수 6이면 짜피 실패함.
        cout<< "Love is open door" << endl;
    }
    else{
        for(int i = 0; i < n-1; i++){
            if(first == 0){
                cout << "1" << endl;
                first = 1;
            }
            else{
                cout << "0" << endl;
                first = 0;
            }
        }
    }
}