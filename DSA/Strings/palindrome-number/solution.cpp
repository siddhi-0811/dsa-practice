class Solution {
public:
    bool isPalindrome(int n) {
        int rev=0; 
        int digit;
        int n1=n;
        while(n>0){
            digit=n%10;
            rev=rev*10+digit;
            n=n/10;
        }
        if (rev==n1)
            return true;
        else return false;
    }
};