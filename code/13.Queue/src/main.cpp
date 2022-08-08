#include <iostream>
#include "../include/Queue.h"
using namespace std;

int main()
{
    Queue<char> q(5);
    q.Push('A');
    q.Push('B');
    cout << q.Front() << ", " << q.Rear() << endl;  //A, B
    q.Push('C');
    q.Push('D');
    cout << q.Front() << ", " << q.Rear() << endl;  //A, D
    q.Pop();
    cout << q.Front() << ", " << q.Rear() << endl;  //B, D
    q.Push('E');
    cout << q.Front() << ", " << q.Rear() << endl;  //B, E
    q.Push('F');
    cout << q.Front() << ", " << q.Rear() << endl;  //B, F
    q.Push('G');
    cout << q.Front() << ", " << q.Rear() << endl;  //B, G
    cout << "OK!" << endl;
    return 0;
}