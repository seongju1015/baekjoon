#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    vector <int> n(10); // 수
    vector <int> odd(10); // 나머지
    int count = 1;
    
    // 수 입력받고 나머지 계산
    for(int i = 0; i < 10; i++){
        cin >> n[i];
        odd[i] = n[i] % 42;
    }

    // 나머지 크기 순으로 sort
    sort(odd.begin(),odd.end());

    // index == index+1 제외하고 count 증가. 마지막인 경우 그 전 수랑 비교 
    for(int i = 0; i < 10; i++){
        if(i == 9){
            if(odd[i] == odd[i-1]){
                count = count;
            }
        }
        else{
            if(odd[i] == odd[i+1]){
                count = count;
            }
            else{
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}