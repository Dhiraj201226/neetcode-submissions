class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();  
        vector<int>res(n);
        stack<int>st;
        for(int i=0;i<n;i++){
       if(st.empty()){
        st.push(i);
       }
       else{
        while(!st.empty() && temperatures[st.top()]<temperatures[i]){
        int j=st.top();
        st.pop();
        res[j]=i-j;
        }
        st.push(i);
       }
        }
        while(!st.empty()){
            int m=st.top();
            st.pop();
            res[m]=0;
        }
        return res;
    }
};
