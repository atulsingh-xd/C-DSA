class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> count(3);

        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                count[0]++;
            } else if (nums[i] == 1) {
                count[1]++;
            } else {
                count[2]++;
            }
        }

        int index = 0;
        for (int i = 0; i < 3; i++) {
            int freq = count[i];
            while (freq > 0) {
                nums[index] = i;
                index++;
                freq--;
            }
        }
    }
};