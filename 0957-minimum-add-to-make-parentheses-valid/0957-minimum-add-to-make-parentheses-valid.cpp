class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.size();
        stack<char> st;
        for(int i=0; i<n; i++){
            char ch = s[i];
            if(ch=='(')st.push(ch);
            else{
                if(ch==')' && (st.empty() ||st.top()!='('))st.push(ch);
                else st.pop();
            }
        }
        return st.size();
    }
};

