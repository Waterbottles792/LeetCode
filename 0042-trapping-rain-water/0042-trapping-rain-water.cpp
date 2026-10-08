class Solution {
public:
    int trap(vector<int>& height) {
        int t = height.size();
        int left=0;
        int right=left + 1;
        int count=0;
        int middle;
        while (left!=t-1) {
            if (height[left+1]>=height[left]) {
                left++;
                right=left+1;
            }
            else {
                while (right<t && height[right] < height[left]) {
                    right++;
                }
                if (right<t) {
                    middle=left+1;

                    while (middle<right) {
                        count+=height[left]-height[middle];
                        middle++;
                    }

                    left=right;
                    right=left+1;
                }
                else {
                    int maxRight=left+1;

                    for (int i=left+1;i<t;i++) {
                        if (height[i]>height[maxRight]) {
                            maxRight=i;
                        }
                    }
                    middle = left+1;
                    while (middle<maxRight) {
                        count+=height[maxRight]-height[middle];
                        middle++;
                    }
                    left=maxRight;
                    right=left+1;
                }
            }
        }
        return count;
    }
};