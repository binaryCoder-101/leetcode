class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>st(nums.begin(),nums.end());
        int k = 0;
        for(auto ele:st) nums[k++] = ele;
        return k;
    }
};