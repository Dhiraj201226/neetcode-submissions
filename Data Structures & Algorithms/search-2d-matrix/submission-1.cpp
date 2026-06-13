class Solution {
public:
    int binary(vector<int>&nums,int target){
        int l=0;
        int h=nums.size()-1;
   while(l<=h){
    int mid=l+(h-l)/2;
    if(nums[mid]==target){
        return mid;
    }
    else if(nums[mid]<target){
        l=mid+1;
    }
    else{
        h=mid-1;
    }
   }
   return -1;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int>row;
        int n=matrix.size();
        int m=matrix[0].size();
    for(int i=0;i<n;i++){
        row.push_back(matrix[i][m-1]);
    }
    int j=0;
    int k=n-1;
    int r=0;
    if(target<=row[0]){
        r=0;
    }
    else{
    while(j<=k){
        int d=j+(k-j)/2;
        if(d>0 && row[d-1]<target && row[d]>=target){
            r=d;
            break;
        }
        else  if(d>0 && row[d-1]>=target && row[d]>target){
            k=d-1;
        }
        else{
        j=d+1;
        }
    }
    }
    vector<int>bin=matrix[r];
    int res=binary(bin,target);
    if(res!=-1){
        return true;
    }
    return  false;
    }
};
