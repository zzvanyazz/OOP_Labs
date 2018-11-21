#include <iostream>
#include <cstddef>
#include <string>


template <typename T>
class MyStack
{
private:
    static const int N = 10;
    T t[N];
    std::size_t counter;
public:
    MyStack(): counter(0) {}
    void push(const T &el)
    {
        if (counter < N) t[counter++] = el;
    }
    void pop()
    {
        if (counter > 0) counter--;
    }
    const std::size_t size() const {return counter; }
    bool empty() {return counter == 0; }
    const T top() const
    {
        if (counter > 0) return t[counter - 1];
    }

};




int main()
{
    MyStack<int> s;
    s.push (1);
    s.push (2);
    s.push (3);
    s.push (4);
    while (!s.empty())
    {
        std::cout<< s.top()<< std::endl;
        s.pop();
    }
    return 0;
}
