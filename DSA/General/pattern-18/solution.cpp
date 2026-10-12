class Solution {
public:
    void pattern18(int n) {
        for(int i=n; i>0; i--){
            for (char ch='A'+i-1; ch<='A'+n-1; ch++){
                cout<<ch<<" ";
            }
            cout<<endl;
        }

    }
};