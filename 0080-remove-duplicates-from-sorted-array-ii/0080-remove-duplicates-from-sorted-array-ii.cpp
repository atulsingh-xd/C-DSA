class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <= 2) return nums.size();
        
        int lp = 2;
        for (int rp = 2; rp < nums.size(); rp++) {
            if (nums[rp] != nums[lp - 2]) {
                nums[lp] = nums[rp];
                lp++;
            }
        }
        return lp;
    }
};