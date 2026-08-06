class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int lp=0, rp=0, n=nums.size();
        while(rp<n){
            int count=1;
            while(rp+1<n && nums[rp]==nums[rp+1]){
                rp++;
                count++;
            }
            int cnum=min(2,count);
            for(int i=0; i<cnum;i++){
                nums[lp]=nums[rp];
                lp++;
            }
            rp++;
        }
        return lp;
        
    }
};