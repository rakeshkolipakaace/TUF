class Solution {
    public:
        bool isPalindrome(int x) {
               int n = x;
            int sum = 0;
            
            // Edge case: Negative numbers are not palindromes
            if (x < 0) return false;
            
            // Reverse the digits of the number
            while (n > 0) {
                int rem = n % 10;
                sum = sum * 10 + rem;
                n = n / 10;
            }
            
            // Check if the reversed number equals the original number
            if (sum == x) {
                return true;
            } else {
                return false;
            }
            
        }
    };