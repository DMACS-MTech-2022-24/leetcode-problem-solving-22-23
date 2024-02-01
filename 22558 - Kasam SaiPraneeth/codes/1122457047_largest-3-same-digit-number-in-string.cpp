class Solution {
public:
    string largestGoodInteger(string num) {
        int n = num.size();
        string maxdigit = "";
        int maxx = -1;
        for (int i = 0; i < n - 2; i++) {
            if (num[i] == num[i + 1] && num[i] == num[i + 2]) {
                maxdigit = string(3, num[i]);
                maxx = max(maxx, stoi(maxdigit));
            }
        }
        if(maxx == 0){
            return "000";
        }
        else if(maxx == -1){
            return"";
        }
        else {

        }return to_string(maxx);
    }
};
