class Solution {
public:
    bool isPalindrome(string s) {
        string text = "";
        for(char ch:s) {
            if(isalnum((unsigned char)ch)) {
                text+=tolower(ch);
            }
        }
        int right=0;
        int length = text.size();
        int left = length-1;
        for(int i=0;i<length/2;i++) {
            if(text[right]!=text[left]) return false;
            right++;
            left--;
        }
        return true;
    }
};