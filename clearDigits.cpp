class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        
        for (char c : s) {
            if (isdigit(c)) {
                if (!st.empty()) {
                    st.pop();  // Remove the closest non-digit character
                }
            } else {
                st.push(c);  // Push non-digit characters
            }
        }

        // Construct the final result from the stack
        string result;
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }
        
        reverse(result.begin(), result.end());  // Reverse to get correct order
        return result;
    }
};
