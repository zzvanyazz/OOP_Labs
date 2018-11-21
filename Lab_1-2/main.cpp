 #include <iostream>
#include <conio.h>
using namespace std;




class Kasa{
    public :
    unsigned int amountCars;

    double Payment;
    Kasa(){
        amountCars = 0;
        Payment = 0;
    }
    void display(){
        cout << amountCars << "   " <<   Payment << endl;
    }
    void payingCar(){
        amountCars++;
        Payment += 0.5;
    }
    void nopayingCar(){
        amountCars++;

    }
};

template <typename A>
class Test
{
public:
    A testA;
};

int main()
{
    Test<Kasa> a;
    a.testA = *(new Kasa());
    
    Kasa kasa;

    while (true) {
        switch (getch()) {
        case 27:
            kasa.display();
            return 0;
        case 112:
            kasa.payingCar();
            break;
        case 110:
            kasa.nopayingCar();
        }
    }

    return 0;
}
