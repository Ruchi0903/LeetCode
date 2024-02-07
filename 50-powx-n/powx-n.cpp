class Solution {
public:
    double solve(double x, int n)
    {
        if(n==0) return 1;

        double temp = myPow(x, n/2);
        temp = temp*temp;
        if(n&1) return temp*x;
        else return temp;
    }
    double myPow(double x, int n) {
        double res = solve(x, abs(n));
        if(n<0) return 1/res;   // checking if n = odd.
         return res;    // here checking if n = even.
    }
};