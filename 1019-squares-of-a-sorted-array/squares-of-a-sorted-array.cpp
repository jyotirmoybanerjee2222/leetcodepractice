class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;
        vector<int> res;

        while(left <= right)
        {
            if(abs(nums[left]) > abs(nums[right]) )
              {
                res.push_back(nums[left] * nums[left]);
                left++;
              }

              else
              {
                res.push_back(nums[right] * nums[right]);
                right--;
              }
        }
         reverse(res.begin(), res.end());
         return res;
        
    }
};