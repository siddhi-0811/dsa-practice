
class Solution {
public:
    void pattern21(int n) {

        // Top row
        for(int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << endl;

        // Middle rows
        for(int i = 0; i < n-2; i++) {
            cout << "*";

            for(int j = 0; j < n-2; j++) {
                cout << " ";
            }

            cout << "*" << endl;
        }

        // Bottom row: skip if n = 1
        if(n > 1) {
            for(int j = 0; j < n; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
};
