class Solution {
public:
    int countVowelPermutation(int n) {
        const int MOD = 1e9 + 7;
        long A = 1, E = 1, I = 1, O = 1, U = 1, A_new, E_new, I_new, O_new, U_new;
        for(int j = 2; j <= n; j++) {
            A_new =  E;
            E_new = (A + I) % MOD;
            I_new = (A + E + O + U) % MOD;
            O_new = (I + U) % MOD;
            U_new =  A;
            A = A_new, E = E_new, I = I_new, O = O_new, U = U_new;
        }
        return (A + E + I + O + U) % MOD;
    }
};