class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int tar) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int a, b, c, d, n = nums.size();

        for (a = 0; a < n - 3; a++) {
            if (a > 0 && nums[a] == nums[a - 1])
                continue;
            for (b = a + 1; b < n - 2; b++) {
                if (b > a + 1 && nums[b] == nums[b - 1])
                    continue;

                c = b + 1, d = n - 1;
                while (c < d) {
                    long long sum =
                        (long long)nums[a] + nums[b] + nums[c] + nums[d];
                    if (sum < tar) {
                        c++;
                    } else if (sum > tar) {
                        d--;
                    } else {
                        ans.push_back({nums[a], nums[b], nums[c], nums[d]});
                        c++;
                        d--;

                        while (c < d && nums[c] == nums[c - 1])
                            c++;
                    }
                }
            }
        }
        return ans;
    }
};