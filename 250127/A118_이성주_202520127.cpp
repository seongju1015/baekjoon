class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return;
        
        int l = 0, r = 1;
        while(true) {
            if(r >= n) break;
            
            if(!nums[l] && !nums[r]) { // 둘 다 0일 때
                r++;
                continue;
            }
            
            if(!nums[l] && nums[r]) { // l 값만 0일 때
                swap(nums[l], nums[r]);
            }
            l++;
            r++;
        }
    }
};
