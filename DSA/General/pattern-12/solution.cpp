class Solution {
public:
    void pattern12(int n) {
        for (int i = 1; i <= n; i++) {

            // Increasing numbers
            for (int j = 1; j <= i; j++) {
                cout << j;
            }

            // Middle spaces
            for (int j = 1; j <= 2 * (n - i); j++) {
                cout << " ";
            }

            // Decreasing numbers
            for (int j = i; j >= 1; j--) {
                cout << j;
            }

            cout << endl;
        }
    }
};

