class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int n= nums.size();
        int count=1;
        //int res;
        //int flag=0;
        if(n==1)return nums[0];
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                count++;
            }
            else{
                if(count>n/2) {
                   return nums[i];
                }
                else count =1;
            }

        }
   
        if(count>n/2) return nums[n-1];
        return -1; 
    }
};