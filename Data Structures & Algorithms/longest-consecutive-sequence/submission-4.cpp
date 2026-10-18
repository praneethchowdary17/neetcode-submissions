class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=1;
        int maxcount=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]==1 || nums[i]+nums[i-1]==-1){
                count++;
                maxcount=max(count,maxcount);
            }
            else if(nums[i]==nums[i-1]){
                continue;
            }
            else{
                count=1;
                continue;
            }
        }
        if(nums.empty()){
            maxcount=0;
        }
        return maxcount;
    }
};
