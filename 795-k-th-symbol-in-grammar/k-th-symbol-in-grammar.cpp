class Solution {
public:
    int kthGrammar(int n, int k) {

        // initialize a flag to track if the values of k and first element are the same.
        bool areValuesSame = true;

        // calculate the total no of elements in the nth row, which is 2^n.
        n = pow(2, n);

        // continue untill we reach the first row.
        while(n != 1)
        {
            // half the no of elements in the row.
            n /= 2;

            // if k is in the second half of the row, adjust k and toggle the flag.
            if(k > n) {
                k -= n;
                areValuesSame = !areValuesSame;
            }
        }

        // return 0 if the flag indicates that the values are the same, otherwise, return 1.
        return ((areValuesSame) ? 0 : 1);
    }
};