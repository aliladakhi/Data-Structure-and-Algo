class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long long int i=0,j=0,ans=1,sum=0,temp=0;
        while(j<nums.size()){
            sum+=nums[j];
            temp=nums[j]*(j-i+1)-sum;
            while(temp > k && i<=j){
                sum-=nums[i];
                temp=temp-(nums[j]-nums[i++]);
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};