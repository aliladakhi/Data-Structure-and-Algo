class Solution {
public:
        int findMaxConsecutiveOnes(vector<int> & nums){
        int count=0;
        int max_1=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
                          max_1=max(max_1,count);
            }
            else if(nums[i]==0){
                max_1=max(max_1,count);
                count=0;
            }
        }
        return max_1;
    }
};