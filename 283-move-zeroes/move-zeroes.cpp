class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int repIndex=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                int temp=nums[repIndex];
                nums[repIndex]=nums[i];
                nums[i]=temp;
                repIndex++;
            }
        }
    }
};