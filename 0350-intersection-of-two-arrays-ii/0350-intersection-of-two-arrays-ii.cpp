class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> freq;
        vector<int>nayan;

        for(int i : nums1){
            freq[i]++;
        }

        for(int j : nums2){
            if(freq.find(j) != freq.end()){
                if(freq[j] > 0) nayan.push_back(j);
                freq[j]--;
            }
        }
        return nayan;
    }
};