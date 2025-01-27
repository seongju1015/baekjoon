#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int result = 0;  

    // 배열을 하나씩 순회하면서 XOR 연산
    for (int i = 0; i < nums.size(); i++) {
        result ^= nums[i];  
    }

    return result;  
}

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};  
    cout << "The single number is: " << singleNumber(nums) << endl;  
    return 0;
}
