class Solution {
public:
    void pattern17(int n) {
        for (int i = 0; i < n; i++) {

            for (int j = 0; j < n - i - 1; j++) {
                cout << " ";
            }

            for (char ch = 'A'; ch <= 'A' + i; ch++) {
                cout << ch;
            }

            for (char sh = 'A' + i - 1; sh >= 'A'; sh--) {
                cout << sh;
            }

            cout << endl;
        }
    }
};
