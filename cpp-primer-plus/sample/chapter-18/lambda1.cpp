//
// Created by fade on 2024/1/21.
//

#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>

const long Size = 390000L;

int main()
{
    using std::cout;
    std::vector<int> numbers(Size);
    std::srand((std::time(nullptr)));
    std::generate(numbers.begin(), numbers.end(), std::rand);
    cout << "Sample Size = " << '\n';
    auto count3 = std::count_if(numbers.begin(), numbers.end(), [](int x) {
        return x % 3 == 0;
    });
    cout << "Count of numbers divisible by 3: " << count3 << "\n";
    auto count13 = 0;
    std::for_each(numbers.begin(), numbers.end(), [&](int x) {
        count3 += x % 3 == 0;
        count13 += x % 13 == 0;
    });
    cout << "Count of numbers divisible by 3: " << count3 << "\n";
    cout << "Count of numbers divisible by 13: " << count13 << "\n";
    return 0;
}