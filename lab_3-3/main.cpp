
#include <iostream>

using namespace std;
class Int{
    int number;
public :

    Int(long double n){
        if(n > 2147483684){
            cout << "error" << endl;
            number = 0;
            return;
        }
        number = (int)n;
    }
    void Print(){
        cout << number << endl;
    }
    void put(int n = 0){
        number = n;
    }
    Int operator+(Int &a){
        return Int(number + a.number);
    }
    Int operator-(Int&a){
        return Int(number-a.number);
    }
    Int operator*(Int &a){
        return(number*a.number);
    }
    Int operator/(Int &a){
        return Int(number/a.number);
    }
};

int main(int argc, char *argv[])
{

    Int ar(30000000000000);
    Int b(3);
    Int c(4);
    Int d = b+c;
    d.Print();
    ar.Print();
    return 0;
}
