#ifndef _MYSTACK_H
#define _MYSTACK_H

#include "MyUtil.h"

template<class T>
class MyStack{
public:
    MyStack(int stackCapacity=10);  //构造函数，默认初始化栈大小为10
    ~MyStack();

    bool IsEmpty() const;       //判断栈是否为空
    T& Top() const;             //返回栈顶元素
    void Push(const T& item);   //(在栈顶)添加元素
    void Pop();                 //删除栈顶元素
private:
    T *stack;
    int top;                    //记录栈顶的位置
    int capacity;               //栈的容量

};
// IsEmpty():判断是否为空
template<class T>
inline bool MyStack<T>::IsEmpty() const
{
    return top == -1;   //top为-1时，栈为空
}
// Top():返回栈顶元素
template<class T>
inline T& MyStack<T>::Top() const
{
    if(IsEmpty())   throw "Stack is empty!";
    return stack[top];
}
// Pop():删除栈顶元素
template<class T>
inline void MyStack<T>::Pop()
{
    if(IsEmpty())   throw "Stack is empty.  Cannot delete!";
    stack[top--].~T();  //析构,删除当前栈顶元素，并使top-1
}

template<class T>
MyStack<T>::MyStack(int stackCapacity) : capacity(stackCapacity)
{
    if(capacity < 1)    throw "stack capacity must be > 0";
    stack = new T[capacity];
    top = -1;   //初始时没有元素
}
// 析构函数，删除栈
template<class T>
MyStack<T>::~MyStack()
{
    delete[] stack;
}
// Push():从栈顶添加元素
template<class T>
void MyStack<T>::Push(const T& item)
{
    //栈满后，扩大栈容量为原来的2倍
    if(top == capacity - 1){
        ChangeSize1D(stack, capacity, 2*capacity);
        capacity *= 2;
    }
    stack[++top] = item;

}

#endif