class Solution {
public:
    bool isHappy(int n) {
        // happy number true if sum of digits square eventually equals 1
        unordered_map<int, int> m;
        while (n != 1) {
            if (m[n] == 0) {
                ++m[n];
            }
            else {
                return false; 
            }
            int sum = 0;
            while (n!= 0) {
                sum += pow(n % 10, 2);
                n /= 10;
            }
            n = sum;
        }
        return true;
    }
};
