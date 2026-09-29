class Solution {
public:
   bool isPalindrome(string s) {
    string c;
    for (char x : s) if (isalnum(x)) c += tolower(x);
    string r = c;
    reverse(r.begin(), r.end());
    return c == r;

        
    }
};