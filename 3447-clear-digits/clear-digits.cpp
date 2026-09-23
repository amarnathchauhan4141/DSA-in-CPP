class Solution {
public:
    string clearDigits(string s) {
        string result;

        for (int i = 0; i < s.length(); i++) {
            char c = s[i];

            if (isdigit(c))  // it will check is any digit in string or not.
             {
                if (!result.empty())
                    result.pop_back();
            } 
            else {
                result.push_back(c);
               }
        }

        return result;
    }
};