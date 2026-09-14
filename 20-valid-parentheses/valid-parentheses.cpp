class Solution {
public:
    bool isValid(string s) {
        int len = s.length();
        stack<char> stk;
        for(int i=0;i<len;i++){
            if(s[i] == '(' || s[i] =='[' || s[i] == '{'){
                stk.push(s[i]);
                continue;
            }
            if(stk.empty()){
                return false;
            }
            if(s[i] ==')' && stk.top() =='(' || s[i] ==']' && stk.top()=='[' || s[i] =='}' && stk.top()=='{'){
                stk.pop();
            }
            else{
                stk.push(s[i]);
            }
        }
        if(stk.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};