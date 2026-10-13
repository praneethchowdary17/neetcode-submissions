class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> hm;
        for(int i=0;i<n;i++){
            hm[nums[i]]++;
        }
        int ans;
        for(int i=0;i<n;i++){
            if(hm[nums[i]]>n/2){
                ans=nums[i];
            }
        }
        return ans;
    }
};