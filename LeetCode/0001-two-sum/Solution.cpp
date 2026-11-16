class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
vector<int> v;
        for(int i=0; i<nums.size(); i++){
            int x=nums[i];
            int y=target-x;

            for(int j=i+1; j<nums.size(); j++){
                if(nums[j]==target-x){
                    v.push_back(i);
                    v.push_back(j);
                    return v;
                }
            }
        }
        return v;
    }
};