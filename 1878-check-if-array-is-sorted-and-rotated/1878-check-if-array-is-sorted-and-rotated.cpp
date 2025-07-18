class Solution {
public:
    void rotate(vector<int>& nums){
        int start = nums[0];
        for(int i=0; i<nums.size()-1; i++){
            nums[i] = nums[i+1];
        }
        nums[nums.size()-1] =start;
    }
    bool check(vector<int>& res) {
        vector<int> nums = res;
        sort(nums.begin(), nums.end());
        int n= nums.size();
        while(n>0){
            rotate(nums);
            n--;
            if(nums == res){
                return true;
            }
        }
       return false; 

    }
};