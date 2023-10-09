class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int p=1,maxP=nums[0];
        for(int i=0;i<nums.size();i++){
            p*=nums[i];
            maxP=max(p,maxP);
            if(p==0) p=1;
        }
        return maxP;
    }
};