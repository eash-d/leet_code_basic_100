# include <iostream>
# include <queue>

// 写一个 RecentCounter 类来计算特定时间范围内最近的请求。
// 请你实现 RecentCounter 类：
// RecentCounter() 初始化计数器，请求数为 0 。
// int ping(int t) 在时间 t 添加一个新请求，其中 t 表示以毫秒为单位的某个时间，并返回过去 3000 毫秒内发生的所有请求数（包括新请求）。
// 确切地说， **返回** 在[t-3000, t]内发生的 **请求数**。
// 保证 每次对 ping 的调用都使用比之前更大的 t 值。

// ??  -> 哦哦哦哦哦哦哦哦哦
// ??  -> 噢噢噢噢噢噢噢噢哦

// class RecentCounter {
// private:
//     std::queue<int> q;
// public:
//     RecentCounter() {
//     }
    
//     int ping(int t) {
//         // 复制一份q
//         std::queue<int> qq;
//         q.push(t);
//         qq = q;

//         while (!qq.empty())
//         {
//             int f = qq.front();
//             if (t - f > 3000)
//                 qq.pop();
//             else
//                 break;
//         }
//         return qq.size();
//     }
// };

class RecentCounter {
private:
    std::queue<int> q;
public:
    RecentCounter() {
    }
    
    int ping(int t) {
        while (!q.empty())
        {
            // 如果不符合条件，pop出来，由于是按照顺序递增的，只要判断头部几个就可以了
            if (t - q.front() > 3000)
                // queue里没用的值可以直接删掉
                q.pop();
            else
                break;
        }
        // while结束后，得到剔除不满足条件的值的队列，这个时候再把t给push进去
        q.push(t);
        return q.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */

int main()
{
    RecentCounter* obj = new RecentCounter();

    int param_1 = obj->ping( 1 );
    int param_2 = obj->ping( 100 );
    int param_3 = obj->ping( 3001 );
    int param_4 = obj->ping( 3002 );

    std::cout << param_1 << std::endl;
    std::cout << param_2 << std::endl;
    std::cout << param_3 << std::endl;
    std::cout << param_4 << std::endl;

    std::cin.get();
}

