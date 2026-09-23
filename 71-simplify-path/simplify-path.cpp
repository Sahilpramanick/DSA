class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        int n = path.size();
        string ans = "";
        string temp = "";
        for(int i = 0; i <= n; i++) {
            if(i == n || path[i] == '/') {
                if(temp == "" || temp == ".") {
                   //dont do anything 
                }
                else if(temp == "..") {
                    if(!st.empty())
                        st.pop();
                }
                else {
                    st.push(temp);
                }
                temp = "";
            }
            else {
                temp += path[i];
            }
        }
        while(!st.empty()) {
            ans = "/" + st.top() + ans;
            st.pop();
        }
        if(ans == "")
            return "/";

        return ans;
    }
};