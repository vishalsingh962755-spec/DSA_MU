class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftsum=0;
        int rightsum=0;
        int n=nums.size();  

        for(int i=0;i<n;i++){
            leftsum=0;
            for(int k=0;k<i;k++){       
                leftsum+=nums[k];
            }
            rightsum=0;
            for(int j=i+1;j<n;j++){    
                rightsum+=nums[j];       
            }
            if(leftsum==rightsum){
                return i;
            }
        }
        return -1;
    }
};