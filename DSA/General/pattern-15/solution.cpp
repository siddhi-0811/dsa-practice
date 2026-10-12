class Solution {
public:
    void pattern15(int n) {
        for(int i=n; i>0;  i--){
            for(char ch='A'; ch<'A'+i; ch++){
                cout<<ch;
            }
            cout<<endl;
            
        }

    }
};