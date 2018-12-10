
#include <iostream>
using namespace std;

class Pair{
    int fistNumber;
    int secondNumber;
public :
    Pair(int a = 0, int b = 0){
        fistNumber = a;
        secondNumber = b;

    }
    int getFistNumber(){
        return fistNumber;
    }
    int getsSecondNumber(){
        return secondNumber;
    }
    void setFistNumber(int f){
         fistNumber = f;
    }
    void setSecondNumber(int s){
         secondNumber = s;
    }
    friend void operator>>(iostream &input, Pair &p){
        cout  << "Fist Number: ";
        input >> p.fistNumber;
        cout << "Second Number: ";
        input >> p.secondNumber;
        cout << endl;
    }
    friend void operator<<(iostream &output, Pair &p){
        output << "FistNumber = " << p.fistNumber << endl << "Secoond Number = " << p.secondNumber << endl;
    }
    bool operator<(Pair &p){
        if(fistNumber < p.fistNumber)return true;
        else if (fistNumber == p.fistNumber){
            if( secondNumber < p.secondNumber)return true;
            return false;
        }
        return false;

    }
    bool operator>(Pair &p){
        if (*this == p  )return false;
        return !(*this < p);
    }
    bool operator==(Pair &p){
          if (fistNumber == p.fistNumber && secondNumber == p.secondNumber)return true;
    }

};
class fraction:public Pair{

};




int main()
{




    Pair b(9, 3), c(7, 8);
    if(b < c){
        cout << "b < c" << endl;

    }
    else if( b== c){
        cout << "b == c" << endl;
    }
    else cout << "b > c" << endl;


    return 0;
}
