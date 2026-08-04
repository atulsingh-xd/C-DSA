class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

        if (nums.empty()) return {};

        sort(nums.begin(),nums.end());
        vector<int> ans;
        int n=nums.size();

        int min=nums[0];
        int max=nums[n-1];

        set<int> s(nums.begin(), nums.end());

        for(int i=min;i<=max;i++){
            if(s.count(i)==0){
                ans.push_back(i);
            }
            
        }
        return ans;

        
    }
};