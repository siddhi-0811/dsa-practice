class Solution {
public:
    void pattern9(int n) {
        for (int i=0; i<n; i++){
            for (int j=0; j<n-i-1; j++){
                cout<< " ";
            }
            for (int j=0; j<2*i+1; j++){
                cout<< "*";
            }
            cout<<endl;
        }

        for (int m=n-1; m>=0; m--){
            for (int k=0; k<n-m-1; k++){
                cout<< " ";
            }
            for (int k=0; k<2*m+1; k++){
                cout<< "*";
            }
            cout<<endl;
        }

    }
};