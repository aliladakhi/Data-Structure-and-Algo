class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int unique=1;
        int chkout=nums[0];
        int repIndex=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=chkout){
                    nums[repIndex]=nums[i];
                    repIndex++;
                    chkout=nums[i];
                    unique++;
            }
        }
        return unique;
    }
};