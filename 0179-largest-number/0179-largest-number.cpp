class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> val;
        for(int i : nums){
            val.push_back(to_string(i));
        }

        
        sort(val.begin(), val.end(), [](string a, string b){
            return (a + b) > (b + a);
        });

        if(val[0] == "0") return "0";
        string ans = "";
        for(auto it : val){
            ans.append(it);
        }
        
        return ans;

    }
};