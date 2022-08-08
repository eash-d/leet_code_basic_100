# include <iostream>
# include <string>

class Solution {
public:

    // Encodes a URL to a shortened URL.
    std::string encode(std::string longUrl) {
        longUrl[0] += 1;
        return longUrl;
    }

    // Decodes a shortened URL to its original URL.
    std::string decode(std::string shortUrl) {
        shortUrl[0] -= 1;
        return shortUrl;
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));

int main()
{
    Solution s;
    std::string url = "https://leetcode.com/problems/design-tinyurl";
    std::string ans;
    ans = s.decode(s.encode(url));
    for (int i=0; i<ans.size(); ++i)
        std::cout << ans[i] << std::endl;
    std::cin.get();
}