class Solution {
public:
    int integerBreak(int n) {
        if (n == 2) return 1;
        if (n == 3) return 2;
        
        vector<int> r(n+1, 0);
        r[1] = 1;
        r[2] = 2; //Note
        r[3] = 3; //Note
        for (int i = 3; i <= n; ++i) {
            for (int j = 1; j < i; ++j)
                r[i] = max(r[i], j * r[i-j]);
        }
        return r[n];
    }
};

//math
/*
if(n <= 3) return n-1; //assuming n >= 2
return n%3 == 0 ? (int)pow(3, n/3) : (n%3 == 1 ? (int)pow(3, n/3-1)*4 : (int)pow(3, n/3)*2);
*/
