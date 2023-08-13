class Solution {
public:
    bool isPalindrome(int x) {
        int original = x;
        long long int compare = 0;

        while (x > 0) {
            int temp = x % 10;
           compare = compare * 10 + temp;
           x = x / 10;
           }

        return (original == compare);
        }
};
