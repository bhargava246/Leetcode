class Solution {
public:
    const int MOD = 1e9 + 7;
    long long powmod(long long x,long long y,int mod){
    long long res = 1;
        x = x % mod;

        while (y > 0) {
            if (y % 2 == 1)
                res = (res * x) % mod;
            x = (x * x) % mod;
            y = y / 2;
        }

        return res;
    }
    int countGoodNumbers(long long n) {
       long long even = n / 2 + (n % 2); 
        long long odd = n / 2;           

        long long evenPart = powmod(5, even, MOD);
        long long oddPart = powmod(4, odd, MOD);

        return (evenPart * oddPart) % MOD;

    }
};