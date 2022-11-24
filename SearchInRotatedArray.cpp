class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int j = nums.size() - 1;
        int i = 0;

        while(i <= j) {

            if(nums[i] == target)
                return i;

            else if(nums[j] == target)
                return j;

            i++;
            j--;
        }

        return -1;
    }
};