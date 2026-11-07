class Solution {
public:
    int primeUptoN(int n) {
        int count=0;
        int prime=0;
        if (n==1) prime=0;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                if(i%j==0) count++;
            }
            if (count==2) prime++;
            count=0;
        }
        return prime;
    }
};