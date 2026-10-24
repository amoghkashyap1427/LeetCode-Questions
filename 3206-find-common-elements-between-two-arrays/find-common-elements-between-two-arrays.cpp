class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int first=0;
        int second=0;
        unordered_map<int, int>f;
        unordered_map<int, int>s;
        for(int i=0; i<nums1.size(); i++){
            f[nums1[i]]=i;
        }
        for(int i=0; i<nums2.size(); i++){
            s[nums2[i]]=i;
        }
        for(int i=0; i<nums1.size(); i++){
            int x=nums1[i];
            if(s.find(x)!=s.end()){
                first++;
            }
        }
        for(int i=0; i<nums2.size(); i++){
            int x=nums2[i];
            if(f.find(x)!=f.end()){
                second++;
            }
        }
        return {first, second};

    }
};