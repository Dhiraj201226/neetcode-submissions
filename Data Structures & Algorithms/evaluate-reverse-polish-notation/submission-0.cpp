class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(string s:tokens){
            if(s!="+" && s!="-" && s!="*" && s!="/"){
                st.push(stoi(s));
            }
            else{
                if(st.size()>=2){
                int n=st.top();
                st.pop();
                int m=st.top();
                st.pop();
                if(s=="+"){
                    st.push(m+n);
                }
                else if(s=="-"){
                    st.push(m-n);
                }
                else if(s=="*"){
                    st.push(m*n);
                }
                else{
                    st.push(m/n);
                }
                }
            }
        }
      return  st.top();
    }
};
