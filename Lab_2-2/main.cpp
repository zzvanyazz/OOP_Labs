
#include <iostream>
using namespace std;



class Queue{
public:
    Queue(int n):number(n), next(nullptr){};


    int number;
    Queue *next;
    void Print(int n){
        if(n == 0)cout << number << endl;
        else next->Print(n-1);
    }
    void add(int n){
        if (next != nullptr) next->add(n);
        else next = new Queue(n);
    }
    void remove(int n){
        if (n = 0){
            number = next->number;
            remove(1);
        }
        if(n == 1) next = next->next;
        else next->remove(n-1);
    }

};

int main()
{

    Queue e(0);
    e.add(1);
    e.add(2);
    e.add(3);
    e.add(4);
    e.add(5);
    e.Print(4);
    e.Print(5);
    e.remove(4);
    e.Print(4);
    return 0;
}
