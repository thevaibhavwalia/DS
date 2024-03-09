class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        set<int> st;
        for(auto it:nums1){
            st.insert(it);
        }
        for(auto it:nums2){
            if(st.find(it)!=st.end()){
                return it;
            }
        }

        return -1;
        
    }
};