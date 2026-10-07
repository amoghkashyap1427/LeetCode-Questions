class Solution {
private:
    void recurse(const string& s, int index, int left_count, int right_count, int left_rem, int right_rem, string& expr, unordered_set<string>& result) {
        // If we reached the end of the string, check if the resulting expression is
        // valid and if we have removed the total number of left and right parentheses
        if (index == s.length()) {
            if (left_rem == 0 && right_rem == 0) {
                result.insert(expr);
            }
            return;
        }

        // The discard case. Note the pruning condition:
        // We don't recurse if the remaining count for that parenthesis is == 0.
        if ((s[index] == '(' && left_rem > 0) || (s[index] == ')' && right_rem > 0)) {
            recurse(s, index + 1, 
                    left_count, 
                    right_count, 
                    left_rem - (s[index] == '(' ? 1 : 0), 
                    right_rem - (s[index] == ')' ? 1 : 0), 
                    expr, 
                    result);
        }

        expr.push_back(s[index]);

        // Simply recurse one step further if the current character is not a parenthesis.
        if (s[index] != '(' && s[index] != ')') {
            recurse(s, index + 1, left_count, right_count, left_rem, right_rem, expr, result);
        } 
        else if (s[index] == '(') {
            // Consider an opening bracket.
            recurse(s, index + 1, left_count + 1, right_count, left_rem, right_rem, expr, result);
        } 
        else if (s[index] == ')' && left_count > right_count) {
            // Consider a closing bracket.
            recurse(s, index + 1, left_count, right_count + 1, left_rem, right_rem, expr, result);
        }

        // Pop for backtracking.
        expr.pop_back();
    }

public:
    vector<string> removeInvalidParentheses(string s) {
        int left = 0;
        int right = 0;

        // First, we find out the number of misplaced left and right parentheses.
        for (char c : s) {
            if (c == '(') {
                left++;
            } else if (c == ')') {
                // If we don't have a matching left, then this is a misplaced right, record it.
                if (left == 0) {
                    right++;
                } else {
                    // Decrement count of left parentheses because we have found a right
                    // which CAN be a matching one for a left.
                    left--;
                }
            }
        }

        unordered_set<string> result_set;
        string expr = "";
        
        // Now, the left and right variables tell us the number of misplaced left and
        // right parentheses and that greatly helps pruning the recursion.
        recurse(s, 0, 0, 0, left, right, expr, result_set);

        return vector<string>(result_set.begin(), result_set.end());
    }
};