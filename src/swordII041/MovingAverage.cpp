# include <iostream>
# include <vector>
# include <numeric>
# include <queue>

// class MovingAverage {
// private:
//     int size;
//     std::vector<int> arr;
//     int index;

// public:
//     /** Initialize your data structure here. */
//     MovingAverage(int size_) {
//         size = size_;
//         index = 0;
//     }
    
//     double next(int val) {
//         if ( arr.size() == size )
//         {
//             arr[index] = val;
//             index = (index + 1) % size;    
//         }
//         else
//         {
//             arr.push_back(val);
//             index = (index + 1) % size; 
//         }

//         int sum = std::accumulate(arr.begin(), arr.end(), 0);
//         return sum*1.0 / arr.size();
//     }
// };

class MovingAverage {
private:
    int size;
    std::queue<int> q;
    int sum;

public:
    /** Initialize your data structure here. */
    MovingAverage(int size_) {
        size = size_;
        sum = 0;
    }
    
    double next(int val) {
        sum += val;
        q.push(val);
        int n = q.size();
        
        if (n > size)
        {
            sum -= q.front();
            q.pop();
            return sum*1.0 / size;
        }

        return sum*1.0 / n;

    }
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage* obj = new MovingAverage(size);
 * double param_1 = obj->next(val);
 */

int main()
{
    int size = 3;
    MovingAverage* obj = new MovingAverage(size);
    double param_1 = obj->next(1);
    double param_2 = obj->next(10);
    double param_3 = obj->next(3);
    double param_4 = obj->next(5);

    std::cout << param_3 << std::endl;
    std::cin.get();
}