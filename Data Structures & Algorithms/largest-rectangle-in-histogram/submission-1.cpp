class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
     stack<int>st;
     int maxi=0;
     int n=heights.size();
     for(int i=0;i<=heights.size();i++){
         int x = (i == n) ? 0 : heights[i];
    
          
                while(!st.empty() && heights[st.top()]>x){
                    int j=st.top();
                    st.pop();
                
                         int width = st.empty() ? i : (i - st.top() - 1);
                      int area=(heights[j])*width;
                    maxi=max(maxi,area);
                    
                }
            
        
        st.push(i);
     } 
     return maxi;
    }
};
