class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        unordered_map <int,int> rem;

        for(int i = 0; i<n; i++){
            int remaining = target - nums[i];

            if(rem.find(remaining) != rem.end()){

                return {rem[remaining],i};

            }
            else {
                rem[nums[i]] = i;
            }
        }
        return {};
    }
};
