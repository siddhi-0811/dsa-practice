class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++) {
            int x = nums[i];
            bool found = true;

            for(int j = 0; j < nums.size(); j++) {
                if(j == i) {
                    continue;
                }

                if(nums[j] == x) {
                    found = false;
                    break;
                }
            }

            if(found) {
                return nums[i];
            }
        }

        return -1;
    }
};