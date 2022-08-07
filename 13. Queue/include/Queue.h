#ifndef _QUEUE_H
#define _QUEUE_H

template<class T>
class Queue{
public:
    Queue(int queueCapacity=10);    //构造函数，默认队列容量为10
    bool IsEmpty() const;           //判断队列是否为空
    T& Front() const;               //查看队首数据
    T& Rear() const;                //查看队尾数据
    void Push(const T& item);       //在队尾插入数据
    void Pop();                     //删除队首数据
private:
    T* queue;                       //创建动态数组
    int front;                      //记录队首位置
    int rear;                       //记录队尾位置
    int capacity;                   //数组容量

};
// 队列的构造函数
template<class T>
Queue<T>::Queue(int queueCapacity) : capacity(queueCapacity)
{
    if(capacity < 1)    throw "Queue length must be >= 1";
    queue = new T[capacity];
    front = rear = 0;                       //初始时，队首队尾都指向下标0
}
// IsEmpty():判断队列是否为空
template<class T>
inline bool Queue<T>::IsEmpty() const
{
    return front == rear;
}
//Push():在队尾添加元素
template<class T>
void Queue<T>::Push(const T &item)
{
    if((rear+1)%capacity==front)            //队列满了
    {
        //加倍
        T* newQueue = new T[2*capacity];    //创建一个新的队列，容量是原来的两倍
        
        int start = (front + 1) % capacity;
        if(start < 2)   //没有回转，no wrap
            std::copy(queue+start, queue+start+capacity-1, newQueue);
        else            //wrap
        {
            std::copy(queue+start, queue+capacity, newQueue);
            std::copy(queue, queue+rear+1, newQueue+capacity-start);
        }
        front = 2 * capacity - 1;   //队首指向新容量最后的空位置处
        rear = capacity -2;         //队尾指向原容量-2的元素
        capacity *= 2;              //容量加倍
        delete[] queue;             //删除原队列
        queue = newQueue;           //重新指向新队列
    }
    // if(rear == capacity - 1)
    //     rear = 0;
    // else
    //     ++rear;
    rear = (rear + 1) % capacity;   //效果同上
    queue[rear] = item;
}
//Front():查看队首数据
template<class T>
inline T& Queue<T>::Front() const
{
    if(IsEmpty())   throw "Queue is empty. No front element.";
    return queue[(front+1) % capacity];  //队首设置为空，需要加1以及判断是否回绕
}
//Rear():查看队尾数据
template<class T>
inline T& Queue<T>::Rear() const
{
    if(IsEmpty())   throw "Queue is empty. No rear element.";
    return queue[rear];
}
//Pop():从队首删除数据
template<class T>
void Queue<T>::Pop()
{
    if(IsEmpty())   throw "Queue is empty. Cannot delete.";
    front = (front + 1) % capacity;
    queue[front].~T();  //调用析构函数，删除队首元素(元素可能为对象)
}
#endif