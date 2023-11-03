class Solution {
public:
    vector<string>ans;
    string cvtNumToTime(int binaryNum)
    {
        int hr = (binaryNum >> 6);
        int min = 63 & binaryNum;
        stringstream ans;
        ans << hr << ":" << (min < 10 ? "0": "") << min;
        if(hr > 11 || min > 59)
            return "";
        return ans.str();
    }

    void f(int n0s, int n1s, int curr)
    {
        if(n0s == 0 && n1s == 0){
            string time = cvtNumToTime(curr);
            if(time != "")
                ans.push_back(time);
            return;
        }
        if(n0s > 0){
            f(n0s - 1, n1s, curr << 1);
        }
        if(n1s > 0){
            f(n0s, n1s - 1, (curr << 1) + 1);
        }
    }
    vector<string> readBinaryWatch(int turnedOn) {
        ans.clear();
        f(10 - turnedOn, turnedOn, 0);
        return ans;
    }
};