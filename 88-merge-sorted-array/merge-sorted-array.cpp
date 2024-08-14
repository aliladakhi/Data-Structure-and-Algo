class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> tempVec(m);  // Resize tempVec to hold 'm' elements
        for(int i = 0; i < m; i++) {
            tempVec[i] = nums1[i];
        }
        
        int i = 0, j = 0, k = 0;
        while (i < m && j < n) {
            if (tempVec[i] <= nums2[j]) {
                nums1[k] = tempVec[i];
                i++;
            } else {
                nums1[k] = nums2[j];
                j++;
            }
            k++;
        }

        while (i < m) {
            nums1[k] = tempVec[i];
            i++;
            k++;
        }

        while (j < n) {
            nums1[k] = nums2[j];
            j++;
            k++;
        }
    }
};
