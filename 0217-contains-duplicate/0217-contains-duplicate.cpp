class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        int siz = size(nums);
        for(int i=0;i<siz;i++) {
            int x = nums[i];
            if (mp[x]==1) return true;
            else mp[x]++;
        } 
        return false;
    }
};