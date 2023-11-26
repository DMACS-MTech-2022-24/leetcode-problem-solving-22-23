class Solution {
public:
unordered_map<string,string>m;
int i=0;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        ++i;
        string s=to_string(i);
        m[s]=longUrl;
        return s;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return m[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));