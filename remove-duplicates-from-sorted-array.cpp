class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0 || nums.size()==1)  return nums.size();
        int rep_val = nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==rep_val){
                nums.erase(nums.begin()+i);
                i--;
            }
            else
                rep_val=nums[i];
        }
        return nums.size();
    }
};
