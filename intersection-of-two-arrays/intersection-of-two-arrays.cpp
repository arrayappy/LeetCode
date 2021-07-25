class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_set<int> uset(nums1.begin(), nums1.end());
        for(auto i:nums2)
        {
            if(uset.count(i))
            {
                res.push_back(i);
                uset.erase(i);
            }
        }
        return res;
    }
};