class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int i=0;
        while(i<s.length()){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                st.push(s[i]);
            else if(s[i]==')'){
                if(st.empty() || st.top()!='(')
                    return false;
                else
                    st.pop();
            }
            else if(s[i]=='}'){
                if(st.empty() || st.top()!='{')
                    return false;
                else
                    st.pop();
            }
            else if(s[i]==']'){
                if(st.empty() || st.top()!='[')
                    return false;
                else
                    st.pop();
            }
            i++;
        }
        if(st.empty())
                return true;
        return false;
    }
};
