class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_map<int, int> umap;
        for(int i=0; i<nums1.size(); i++)
        {
            umap[nums1[i]]++;
        }
        for(int i=0; i<nums2.size();i++)
        {
            if(umap[nums2[i]]>0)
            {
                umap[nums2[i]]--;
                res.push_back(nums2[i]);
            }
        }
        unordered_set<int> uset(res.begin(), res.end());
        res.clear();
        for(auto i: uset)
        {
            res.push_back(i);
        }
        return res;
    }
};