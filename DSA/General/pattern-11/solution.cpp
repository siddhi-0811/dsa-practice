
class Solution {
public:
    void pattern11(int n) {
        for (int i = 1; i <= n; i++) {
            int start = (i % 2 == 1) ? 1 : 0;

            for (int j = 1; j <= i; j++) {
                cout << start;

                if (j < i) {
                    cout << " ";
                }

                start = 1 - start;
            }

            cout << endl;
        }
    }
};
