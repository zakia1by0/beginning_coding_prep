class Solution {
public:
    bool canJump(vector<int>& nums) {
        int sz=nums.size();
        int i=0;

        for(int r=0;i<sz && i<=r;i++){
            r= max(r, i+nums[i]);
        }
        return i== nums.size();
    }
};