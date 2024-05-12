class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
for(int i=0;i<n;i++){
    int index = abs(nums[i]) - 1;
    if(index < n && nums[index] > 0){
        nums[index] *= -1; // Mark the number as negative
    }
}
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(nums[i] > 0){
                ans.push_back(i+1);
            }
        }
        return ans;
        
        
    }
};