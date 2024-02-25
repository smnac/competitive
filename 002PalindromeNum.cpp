class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;

        return x == reverse(x);

    }

    long reverse(int x) {
        long x_rev=0;
        while(x>0)
        {
            x_rev = x%10+x_rev*10;
            x=x/10;
        }
        return x_rev;
    }
};
