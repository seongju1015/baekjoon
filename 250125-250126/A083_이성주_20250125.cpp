#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int n = 0;

    cin >> n;
    vector<int> array(n);

    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    //cout<<"2" <<endl;
    sort(array.begin(), array.end());

    for(int i =0; i <n; i++){
        if(i == 0){
            cout << array[i] << " ";
        }
        if(i != 0 && array[i] != array[i-1]){
            cout << array[i] << " ";
            
        }
    }

    return 0;
}
