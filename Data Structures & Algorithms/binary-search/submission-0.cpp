class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int guess;
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            guess=nums[mid];
            if(guess==target){
                return mid;
            }
            else if(guess<target){
                low=mid+1;
            }
            else if(guess>target){
                high=mid-1;
            }
        }
        return ans;
    }
};
