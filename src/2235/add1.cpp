# include <iostream>

class Solution {
public:
    int sum(int num1, int num2) {
        return num1+num2;
    }
};

int main()
{
    Solution s;
    int n1, n2, result;
    n1 = -10;
    n2 = 4;
    result = s.sum(n1, n2);

    std::cout << result << std::endl;

    std::cin.get();
}