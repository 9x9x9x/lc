// don't include the comment in lc
// 557. Reverse Words in a String III
// fsociety, 19ms, 53+%

// Further: In place?
// Solution: find index of first space and reverse(0, space), and so on.

class Solution {
public:
    string reverseWords(string s) {
        string ans;
        stack <char> st;
        for(auto i: s) {
            if(i != ' ') {
                st.push(i);
            } else {
                while(!st.empty()) {
                    char temp = st.top();
                    st.pop();
                    ans.push_back(temp);
                }
                ans.push_back(' ');
            }
        }
        while(!st.empty()) { // Tip: Don't miss why we take one more iteration here in in place solution as well!
            char temp = st.top();
            st.pop();
            ans.push_back(temp);
        }
        return ans;
    }
};
