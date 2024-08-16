class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> temp(nums);
        nums.clear();
        nums.emplace_back(temp[0]);
        for(auto it:temp){
            if(nums.back()!=it){
                nums.emplace_back(it);
            }
        }
        return nums.size();
    }
};