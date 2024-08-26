class Solution {
public:
    bool check(vector<int>& nums) {
        int dropIndex=-1;
        int drop=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<drop){
                dropIndex=i;
                break;
            }
            drop=nums[i];
        }
        if(dropIndex==-1){
            return true;
        }
        for(int i=0;i<nums.size()-1;i++){
            int currIndex=i+dropIndex;
            if(nums[(currIndex)%nums.size()]>nums[(currIndex+1)%nums.size()]){
                return false;
            }
        }
        return true;

    }
};