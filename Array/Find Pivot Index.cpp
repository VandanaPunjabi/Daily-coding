class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int totalsum = 0;     //28

        for(int i=0;i<nums.size();i++){
            totalsum += nums[i];
        }

        int leftsum = 0;

        for(int i=0;i<nums.size();i++){

            leftsum += nums[i];

            if(totalsum-leftsum == leftsum-nums[i]){
                return i;
            }
        }

        return -1;
    }
};
