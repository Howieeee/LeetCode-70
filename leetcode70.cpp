class Solution {
public:
    int climbStairs(int n) {
        // 2,3,5,8 fib?
        if(n==1)
            return 1;
        
        int fib[46];
        fib[2] = 2;
        fib[3] = 3;
        
        for(int i=4;i<=n;i++)
            fib[i] = fib[i-1]+fib[i-2];
        
        
        
        return fib[n];
    }
};
