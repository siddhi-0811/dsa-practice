class Solution {
public:
    int countDigit(int n) {
        string n1 = to_string(n);

        int count = 0;

        for (int i = 0; i < n1.length(); i++) {
            count++;
        }

        return count;
    }
};