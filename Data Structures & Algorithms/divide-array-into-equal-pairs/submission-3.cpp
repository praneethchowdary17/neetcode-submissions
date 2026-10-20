class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int> hm;
        for(auto x:nums){
            hm[x]++;
        }
        bool flag=true;
        for(auto& [key,cnt]:hm){
            if(cnt%2==1){
                return false;
            }
        }
        return true;
    }
};