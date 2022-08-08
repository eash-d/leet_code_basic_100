# include <iostream>
# include <vector>


// 编写一个函数，不用临时变量，直接交换numbers = [a, b]中a与b的值。


// class Solution {
// public:
//     std::vector<int> swapNumbers(std::vector<int>& numbers) {
//         // 不能这样写嗷会被人吊到死的
//         return {numbers[1], numbers[0]};
//     }
// };


// class Solution {
// public:
//     std::vector<int> swapNumbers(std::vector<int>& numbers) {
//         // 其实是一个数学问题 [a, b] 如何交换成 [b, a]
//         // 对吧其实是一个数学问题，那我肯定先考虑相加或者相减
//         // num[0] = num[0]+num[1]    ->     [a+b, b]
//         // 这时候有  a+b-b=a  把这个值赋给 num[1]  此时为 [a+b, a] 
//         // 即num[1] = num[0] - num[1]    ->     [a+b, a] 
//         // 显然，要获得b， 只需要把a+b-a即可
//         // 即num[0] = num[0] - num[1]    ->     [b, a]
//         // 当然方法非常非常多，怎么加怎么减好像都可以自由灵活
//         numbers[0] = numbers[0] + numbers[1];
//         numbers[1] = numbers[0] - numbers[1];
//         numbers[0] = numbers[0] - numbers[1];
//         

//         我操， stackoverflow 为什么leetcode上会overflow但是这里不会捏
//         return numbers;
//     }
// };


class Solution {
public:
    std::vector<int> swapNumbers(std::vector<int>& numbers) {
        numbers[0]=numbers[0]^numbers[1];
        std::cout << numbers[0] << std::endl;
        numbers[1]=numbers[0]^numbers[1];
        numbers[0]=numbers[0]^numbers[1];
        return numbers;
    }
};

// 假如给定 [1,3],也就是[01,11]  异或规则是同值为0，异值为1
//  numbers[0] = numbers[0]^numbers[1];  //按位异或运算赋值之后[10,11]
//  numbers[1] = numbers[0]^numbers[1];  //[10,01]
//  numbers[0] = numbers[0]^numbers[1];  //[11,01]也就是[3,1]

// 我草，我看懂了，这是nmb二进制异或啊 


int main()
{
    Solution s;
    std::vector<int> n{769466698,1711112269};
    // std::cout << n[0] << std::endl;
    // std::cout << n[1] << std::endl;
    s.swapNumbers(n);
    // std::cout << n[0] << std::endl;
    // std::cout << n[1] << std::endl;

    std::cin.get();
}
