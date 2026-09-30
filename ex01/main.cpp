#pragma once

#include "iter.hpp"
#include <string>
#include <iostream>

template <typename T>
void print(T &n)
{
    std::cout << n << " " << std::endl;
}

int main()
{
    int nums[] = {1, 2, 3, 4, 5};
    size_t len = sizeof(nums) / sizeof(nums[0]);
    iter(nums, len, print<int>);

    std::string array[] = {"Hello", "world", "!"};
    size_t      length = sizeof(array) / sizeof(array[0]);
    iter(array, length, print<std::string>);

    {
        int const constNums[] = {1, 2, 3};
        iter(constNums, 3, print<int const>);
    }

    return 0;
}