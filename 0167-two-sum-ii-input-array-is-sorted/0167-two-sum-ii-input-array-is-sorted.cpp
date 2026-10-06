class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int length = size(numbers);
        int right = 0;
        int left = length-1;
        int nright=0;
        int nleft=0;
        for(int i=0;i<length;i++) {
            if(numbers[right]+numbers[left]>target) left--;
            if(numbers[right]+numbers[left]<target) right++;
            if(numbers[right]+numbers[left]==target) {
                nright=right;
                nleft=left;
            }
        }
        return {nright+1,nleft+1};
    }
};