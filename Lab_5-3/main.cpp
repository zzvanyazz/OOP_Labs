#include <iostream>
#include <math.h>
using namespace std;


class Pair{

public:
    int firstNumber;
    int secondNumber;
    virtual bool operator<(Pair &p){

        if(p.firstNumber >firstNumber) return true;
        else if (p.firstNumber == firstNumber && p.secondNumber > secondNumber) return true;
        else return false;
    }
    virtual bool operator>(Pair &p){
        if ((*this == p)) return false;
        return (!(*this <p));
    }
    virtual bool operator==(Pair &p){
        if(firstNumber == p.firstNumber&&secondNumber==p.secondNumber) return true;
    }
};


class DF:public Pair{

};

class DP:public Pair{
public :
    bool operator <(DP&dp){
        if(pow(dp.firstNumber,dp.secondNumber) >pow(firstNumber, secondNumber)) return true;

        else return false;
    }
    bool operator>(DP&db){
        return (*this<db)&&(*this==db);
    }
};


int main()
{

    return 0;
}
