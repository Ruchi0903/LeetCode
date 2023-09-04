class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int ansIndex = 0;
        int n = chars.size();

        while(i < n){
            int j = i + 1;
            while(j<n && chars[i] == chars[j])
            {
                j++;
            }
            
            // yaha kb aaoge?
            // ya to pura traverse kr liya vector ya naya koi alphabet mila

            // old char store krdo
            chars[ansIndex++] = chars[i];

            // ye count kr rha ek particular alphabet k occurrence ko.
            int count = j - i;

            if(count > 1)
            {
                // converting cnt into single digit and saving in answer
                string cnt = to_string(count);
                for(char ch : cnt)
                {
                    // : = this means "belongs to"
                    chars[ansIndex++] = ch;
                }
            }
            i = j;
        }
        return ansIndex;
    }
};