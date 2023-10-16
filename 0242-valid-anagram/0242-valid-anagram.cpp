class Solution {
public:
    bool isAnagram(string s, string t) {
        // check if the length of s and t are same or not.
        if(s.length() != t.length()){
            return false;
        }

        // a freq arr initialised with 0 and have a size of 26. We'll store the count of every  letter in the string s.
        vector <int> freq (26, 0);

        // now increase the count of every letter present in string s, and then decrease the count of every letter present in string t, inside the freq arr.
        for(int i = 0; i<s.length(); i++)
        {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        // check if the array is empty, if empty -> anagram else false.
        for(int i = 0; i<26; i++)
        {
            if(freq[i] != 0)
            {
                return false;
            }
        }

        return true;
    }
};