class Solution {
public:
    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u';
    }

    int vowelIndex(char ch) {
        if (ch == 'a') return 0;
        if (ch == 'e') return 1;
        if (ch == 'i') return 2;
        if (ch == 'o') return 3;
        return 4; // u
    }

    int countVowelSubstrings(string word) {

        int n = word.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {

            vector<int> freq(5, 0);
            int distinct = 0;

            for (int j = i; j < n; j++) {

                if (!isVowel(word[j]))
                    break;

                int idx = vowelIndex(word[j]);

                if (freq[idx] == 0)
                    distinct++;

                freq[idx]++;

                if (distinct == 5)
                    ans++;
            }
        }

        return ans;
    }
};