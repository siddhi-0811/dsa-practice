class Solution {
public:
    void pattern6(int n) {
        for(int i=n; i>0; i--){
            for(int j=0; j<i; j++){
                cout<< j+1;
            }
            cout<<endl;
        }

    }
};