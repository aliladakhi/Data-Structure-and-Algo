class Solution {
public:
    void reverse(vector<int>& nums, int l, int h) {
    while (l < h) {
        int temp = nums[l];
        nums[l] = nums[h];
        nums[h] = temp;
        l++;
        h--;
    }
}

void rotate(vector<int>& nums, int k) {
    k = k % nums.size(); 
    reverse(nums, 0, nums.size() - 1);
    reverse(nums, 0, k - 1);
    reverse(nums, k, nums.size() - 1);
}

};