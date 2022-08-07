#ifndef _MYUTIL_H
#define _MYUTIL_H

#include <algorithm>    //调用mid和copy

template<class T>
void ChangeSize2D(T* &a, const int oldSize, const int newSize);

template<class T>
void ChangeSize1D(T* &a, const int oldSize, const int newSize)
{
    if(newSize < 0)     throw "New size must be >= 0!";

    T* tmp = new T[newSize];
    int number = std::min(oldSize, newSize);
    std::copy(a, a+number, tmp);
    delete[] a;
    a = tmp;
}

#endif