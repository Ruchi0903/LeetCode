class Solution {
public:
    int minOperations(string s) {
        int x = 0, y = 0;
        for(int i = 0; i<s.size(); i++)
        {
            // 1st case 1010, evens = 1 and odds = 0
            if(i%2 == 0 && s[i] == '1')
            {
                x++;
            }
            else if(i%2 == 1 && s[i] == '0')
            {
                x++;
            }
            // 2nd case 0101, evens = 0 and odds = 1
            if(i%2 == 0 && s[i] == '0')
            {
                y++;
            }
            else if(i%2 == 1 && s[i] == '1')
            {
                y++;
            }
        }
        return min(x, y);
    }
};