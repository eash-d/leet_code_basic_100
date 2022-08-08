# include <iostream>


class Solution {
public:
    bool isPerfectSquare(int num) {
        int l = 0;
        int r = num;
        while (l<=r)
        {
            long long m = (l + r) / 2;
            long long pro = m * m;
            if (pro == num)
                return true;
            else if (pro < num)
                l = ++m;
            else
                r = --m;
        }
        return false;
    }
};


int main()
{
    Solution s;
    int n1 = 16;
    int n2 = 14;
    bool r1, r2;
    r1 = s.isPerfectSquare(n1);
    r2 = s.isPerfectSquare(n2);

    std::cout << r1 << std::endl;
    std::cout << r2 << std::endl;
}