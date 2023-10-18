class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map <char, int> mp;
        int n = s.length();

        // In the first loop, when a character s[i] is encountered, mp[s[i]] creates a new  entry for that character if it hasn't been seen before, with an initial count of 0.
        //Then, mp[s[i]]++; increments the count for that character by 1.
        for(int i = 0; i<n; i++)
        {
            mp[s[i]]++;
        }

        // Now we'll check that if the presence of a char is = 1
        for(int i = 0; i<n; i++)
        {
            if(mp[s[i]] == 1)
                return i;
            
        }
        return -1;
    }
};