#include <iostream>
#include "../include/MyStack.h"

using namespace std;

int main()
{
    MyStack<int> st(200);

    st.Push(99);
    st.Push(22);
    st.Push(18);
    st.Push(67);
    cout << st.Top() << endl;   //67
    st.Pop();
    cout << st.Top() << endl;   //18
    st.Pop();
    cout << st.Top() << endl;   //22

    cout << "OK!" << endl;
    return 0;
}