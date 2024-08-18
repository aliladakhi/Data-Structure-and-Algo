class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele=0,count=0;
        for(auto it:nums){
            if(count==0){
                ele=it;
                count++;
            }
            else{
                if(ele==it){
                    count++;
                }
                else{
                    count--;
                }

            }
        }
        return ele;
    }
};