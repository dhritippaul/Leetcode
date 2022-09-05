class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        // int largest = INT_MIN;
        // for(int i=0; i<n ; i++){
        //     if (nums[i]>largest) largest = nums[i];
        // }
        // int sum = (largest + 1)*(largest)/2;
        int sum = n*(n+1)/2;
        for(int i=0; i<n;i++){
            sum -=nums[i];
        }
        return sum;

        
    }
};