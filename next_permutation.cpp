class Solution {
public:
    void nextPermutation(vector<int>& nums) {
         int n = nums.size();
        if(n==1)
            return;
        
        if(nums[n-1] > nums[n-2]){
            swap(nums[n-1], nums[n-2]);
            return;
        }
        int x = -1;
        for(int i=n-1; i>0; i--){
            if(nums[i] == nums[i-1])
                continue;
            if(nums[i] > nums[i-1]){
                x = i-1;
                break;
            }
        }
        if(x==-1){
            sort(nums.begin(), nums.end());
            return;
        }
        int s;
        for(int i=x+1; i<n; i++){
            if(nums[i]>nums[x]){
                
                s = i;
            }
        }
        swap(nums[s], nums[x]);
        
        sort(nums.begin()+x+1, nums.end());
        
            
     }
};     
