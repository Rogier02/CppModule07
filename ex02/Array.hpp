#pragma once 

#include <cstddef>
#include <string>
#include <iostream>

template <typename T>
class Array
{
    private:
        T           *_data;
        unsigned int _size;

    public:
        Array();
        Array(unsigned int n);
        Array(Array const &src);
        Array &operator=(Array const &rhs);
        ~Array();

        T &operator[](unsigned int index);
        unsigned int size() const;
}; 

#include "Array.tpp"