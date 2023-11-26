class Solution {
public:
unordered_map<string,string>m;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        m[longUrl]=longUrl;
        return longUrl;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return m[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));