#include <iostream>

using namespace std;

class Int{
public :
    int number;
    Int(int n){
        number = n;
    }
    void put(int n = 0){
        number = n;
    }
    void Print(){
        cout << number;
    }
    int sum(Int n){
        number += n.number;
        return number;
    }
};

int main()
{
    Int a = 9, b = 8;

    Int c = a.sum(b);
    c.Print();


    return 0;
}
