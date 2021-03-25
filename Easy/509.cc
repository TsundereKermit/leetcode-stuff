class Solution {
public:
    int fib(int n) {
        int twob4 = 0;
        int oneb4 = 0;
        int ans = 1;
        if (n == 0) 
            return 0;
        else if (n == 1) 
            return 1;
        else {
            for (int i = 2; i <= n; i++) {
                twob4 = oneb4;
                oneb4 = ans;
                ans = twob4 + oneb4;
            }
            return ans;
        }
    }
};