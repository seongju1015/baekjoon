#include <iostream>
#include <vector> 
using namespace std;

int main(){

    // 2차원 배열 array[5][5] 할당
    vector <vector<int> > array(5, vector<int>(4));
    vector <int> result(5);

    for(int i = 0; i < 5; i++){
        cin >> array[i][0] >> array[i][1] >> array[i][2] >> array[i][3];
        result[i] = array[i][0] + array[i][1] + array[i][2] + array[i][3];
    }

    int max = 0, index = 0;
    for(int i = 0; i < 5; i ++){
        if(max < result[i]){
            max = result[i];
            index = i+1;
        }
    }

    cout << index << "\n" << max;

    return 0;
}