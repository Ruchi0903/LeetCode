class Solution {
public:
    bool isPalindrome(string s) {
        // creating a vector to store the required final form of string.
        vector<char> v;
        int n = s.size(), i = 0;
        
    
        // removing the non-alphanumeric chars like space, commas, special chars, digits etc.
        // also converting into lowercase letter.
        while(i<n)
        {
          if(isalnum(s[i]))
          {
            v.push_back(tolower(s[i]));
            i++;
          }
          else i++;
        }

        // checking palindrome
        int left = 0, right = v.size() - 1;
        while(left < right)
        {
            if(v[left] != v[right])
                return false;
            
            left++;
            right--;
        }
        return true;
    }
};