class Solution {
public:
    int GCD(int n1,int n2) {
        int gdg=0;
        for(int i=min(n1, n2); i>0; i--){
            if((n1%i)==0 && (n2%i)==0){
                gdg=i;
                break;
            }
        }
        return gdg;
    }
};