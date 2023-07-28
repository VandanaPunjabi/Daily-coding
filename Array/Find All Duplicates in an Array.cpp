class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
         
        set<int>s,s1;
        vector<int>ans;

        for(int i=0;i<nums.size();i++){

            if(s.find(nums[i]) != s.end()){

                ans.push_back(nums[i]);
            }

            s.insert(nums[i]);
        }

        for(auto ele:s1){
            ans.push_back(ele);
        }

        return ans;
    }
};
