# include <iostream>
# include <cmath>

class Solution {
public:
    double myPow(double x, int n) {
        return pow(x, n);
    }
};

int main()
{
    Solution s;
    double x = 2.10000;
    int n = 3;
    double r;

    r = s.myPow(x, n);

    std::cout << r << std::endl;
    std::cin.get();
}