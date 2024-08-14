class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ans=0;
        vector<int> myVec;
        for(int i=0;i<nums.size();i++){
                myVec.push_back(nums[i]);
            }
        nums.clear();
        for(int i=0;i<myVec.size();i++){
            if(myVec[i]!=val){
                ans++;
                nums.push_back(myVec[i]);
            }
        }
    return ans;
        }
};