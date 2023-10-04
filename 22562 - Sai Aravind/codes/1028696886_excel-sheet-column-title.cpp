class Solution {
public:
    string convertToTitle(int columnNumber) {
        string out;
        while(columnNumber>0)
        {
            --columnNumber;
            out.push_back(columnNumber%26+'A');
            columnNumber=columnNumber/26;
        }
        reverse(out.begin(),out.end());
        return out;
    }
};