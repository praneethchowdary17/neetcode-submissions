class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        vector<int> count(n+1,0);
        vector<int> res(2,0);
        for(auto i:nums){
            count[i]++;
        }
        for(int i=1;i<=nums.size();i++){
            if(count[i]==0){
                res[1]=i;
            }
            if(count[i]==2){
                res[0]=i;
            }
        }
        return res;
    }
};