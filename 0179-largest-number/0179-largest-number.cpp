class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> temp;
        for (int num : nums) {
            temp.push_back(to_string(num));
        }

        sort(temp.begin(), temp.end(), [](string x, string y) {
            return x + y > y + x;
        });

        if (temp[0] == "0") return "0";

       string result = "";
        for (int i = 0; i < temp.size(); i++) {
            result += temp[i];
        }
        return result;
    }
};