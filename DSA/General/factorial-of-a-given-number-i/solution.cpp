class Solution {
public:
    int factorial(int n) {
        int fact=1;
        while(n>0){
            fact=fact*n;
            n=n-1;
        }
        if (n=0)
            fact=1;
        return fact;
    }
};
