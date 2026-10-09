class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int t=s.size();
        if(t%2!=0) return false;
        for(char c : s) {
            if(c=='(' || c=='{' || c=='[') {
                st.push(c);
            }
            else {
                if (st.empty()) return false;
                char t = st.top();
                if (c==')' && t!='(') return false;
                else if (c=='}' && t!='{') return false;
                else if (c==']' && t!='[') return false;
                else st.pop();
            }
        }
        return st.empty();
    }
};