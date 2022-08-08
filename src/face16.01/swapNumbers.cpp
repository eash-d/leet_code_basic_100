# include <iostream>
# include <vector>


// 编写一个函数，不用临时变量，直接交换numbers = [a, b]中a与b的值。


class Solution {
public:
    std::vector<int> swapNumbers(std::vector<int>& numbers) {
        return {numbers[1], numbers[0]};
    }
};


int main()
{
    Solution s;
    std::vector<int> n{1, 2};
    std::vector<int> r;
    r = s.swapNumbers(n);
    

    std::cout << r[0] << std::endl;
    std::cout << r[1] << std::endl;
    std::cout << n[0] << std::endl;
    std::cout << n[1] << std::endl;

    std::cin.get();
}
