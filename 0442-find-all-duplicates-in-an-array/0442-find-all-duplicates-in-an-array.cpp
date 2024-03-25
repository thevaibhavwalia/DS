// class Solution {
// public:
//     vector<int> findDuplicates(vector<int>& nums) {
//         vector<int> ans;

//         for(int i = 0; i < nums.size(); i++){
//             int idx= abs(nums[i]) - 1;

//             if(nums[idx] < 0){
//                  ans.push_back(idx+1);
//              }
                
            
//             nums[idx] = -nums[idx];
//         }

//         return ans;
//     }
// };




class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>  ans;
        set<int> st;
        for(int i=0;i<nums.size();i++){
            if(st.find(nums[i])!=st.end()){
                ans.push_back(nums[i]);
            }
            else{
                st.insert(nums[i]);
            }
        }
        return ans;
        
    }
};