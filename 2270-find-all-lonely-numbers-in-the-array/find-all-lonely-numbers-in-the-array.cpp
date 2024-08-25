class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        if(nums.size()==1){
            return nums;
        }
        vector<int> myVec;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            bool shouldPush = false;

            if (i == 0) { // First element
                if (nums.size() > 1 && abs(nums[i] - nums[i + 1]) > 1) {
                    shouldPush = true;
                }
            } else if (i == nums.size() - 1) { // Last element
                if (abs(nums[i] - nums[i - 1]) > 1) {
                    shouldPush = true;
                }
            } else { // Middle elements
                if (abs(nums[i] - nums[i - 1]) > 1 && abs(nums[i] - nums[i + 1]) > 1) {
                    shouldPush = true;
                }
            }

            if (shouldPush) {
                myVec.push_back(nums[i]);
            }
        }

        // Filter out duplicates in myVec
        unordered_map<int, int> mpp;
        for (auto it : myVec) {
            mpp[it]++;
        }

        myVec.erase(remove_if(myVec.begin(), myVec.end(), [&](int x) {
            return mpp[x] != 1;
        }), myVec.end());

        return myVec;
    }
};
