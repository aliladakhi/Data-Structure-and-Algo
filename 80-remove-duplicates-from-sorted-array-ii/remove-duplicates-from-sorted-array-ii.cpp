class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int flag=0;
        for(auto it=nums.begin()+1;it!=nums.end();it++){
            if(*(it-1)==*it && flag==1){
                nums.erase(it);
                it--;
            }
            else if(*(it-1)==*it && flag==0){
                flag=1;
            }
            else if(*(it-1)!=*it){
                flag=0;
            }
        }
        return nums.size();
    }
};