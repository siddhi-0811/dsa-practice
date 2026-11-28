class Solution {
public:
    bool checkString(string s) {
        int x=s.find("b");

        if(x == string::npos) return true;

        for(int i=x+1; i<s.size(); i++){
            if(s[i]=='a') return false;
        }
        return true;
    }
};