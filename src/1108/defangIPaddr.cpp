# include <iostream>
# include <string>

// 输入：address = "1.1.1.1"
// 输出："1[.]1[.]1[.]1"


class Solution {
public:
    std::string defangIPaddr(std::string address) {
        int n = address.size();
        std::string ret;
        for (int i=0; i<n; ++i)
        {
            if (address[i] == 46)
            {   
                ret += 91;
                ret += 46;
                ret += 93;
            }
            else
                ret += address[i];
        }

        return ret;
    }
};


int main()
{
    std::string address = "1.1.1.1";
    std::string ans;
    Solution s;
    ans = s.defangIPaddr(address);

    for (int i=0; i<ans.size(); ++i)
        std::cout << ans[i] << std::endl;
    std::cin.get(); 
}