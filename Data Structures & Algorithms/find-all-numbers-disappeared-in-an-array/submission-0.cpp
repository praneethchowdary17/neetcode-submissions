class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> hm;
        for(auto x:nums){
            hm[x]++;
        }
        vector<int> ans;
        for(int i=1;i<=n;i++){
            if(hm[i]==0){
                ans.push_back(i);
            }
            else{
                continue;
            }
        }
        return ans;
    }
};