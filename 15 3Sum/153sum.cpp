class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // optimal
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        for(int i=0;i<n;i++){
            if(i!=0 && nums[i]==nums[i-1]) continue;
            int j=i+1,k=n-1;
            int target = -nums[i];
            while(j<k){
                while(j<n-1 && nums[j]==nums[j+1]) j++;
                while(k>1 && nums[k]==nums[k-1]) k--;
                int sum=nums[j]+nums[k];
                if(sum<target) j++;
                else if(sum>target) k--;
                else if(sum==target){
                    vector<int> triplet={nums[i],nums[j],nums[k]};
                    res.push_back(triplet);
                    j++,k--;
                }
            }
        }
        return res;
    }
};