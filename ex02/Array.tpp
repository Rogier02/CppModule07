#pragma once

#include "Array.hpp"
#include <stdexcept>

template <typename T>
Array<T>::Array() : _data(NULL), _size(0)
{

}

template <typename T>
Array<T>::Array(unsigned int n) : _data(new T[n]()), _size(n)
{
    
}

template <typename T>
Array<T>::Array(Array const &src) : _data(new T[src._size]), _size(src._size)
{
   for (unsigned int i = 0; i < _size; i++)
    _data[i] = src._data[i];
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &rhs) 
{
    if (this == &rhs)
        return (*this);
    delete[] _data;
    _data = new T[rhs._size];
    _size = rhs._size;
    for (unsigned int i = 0; i < _size; i++)
        _data[i] = rhs._data[i];
    return (*this);
}

template <typename T>
Array<T>::~Array() 
{
    delete[] _data;
}

template <typename T>
T &Array<T>::operator[](unsigned int index) 
{
    if (index >= _size)
        throw std::out_of_range("Array index out of bounds");
    return _data[index];

}

template <typename T>
unsigned int Array<T>::size() const 
{
    return (_size);
}