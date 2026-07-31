class Solution {
public:
    int countKeyChanges(string s) {
        int count = 0;

        char prev = tolower(s[0]);

        for (int i = 1; i < s.size(); i++) {
            char curr = tolower(s[i]);

            if (curr != prev)
                count++;

            prev = curr;
        }

        return count;
    }
};