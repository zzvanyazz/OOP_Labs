
#include <iostream>
#include <string.h>
using namespace std;

class publication{
    string name;
    int price;
public:
    string getName(){return name;}
    int getPrice(){return price;}
    void setName(string n){name = n;}
    void setPrice(int p){price = p;}
    void getData(){
        cout << "Name = "+name+"    price = " << price  << endl;
    }
    void setData(){
        cout << "name: ";
        cin >> name ;
        cout << endl << "price: ";
        cin >> price;
        cout << endl;
    }
};
class book: public publication{
    int amountPages;
public:
    void setAmountPages(int a){
        amountPages = a;
    }
    int getAmountPages(){
        return amountPages;
    }
    void getData(){
          publication::getData();
        cout << "Amount Pages = " << amountPages << endl;

    }
    void setData(){
          publication::setData();
        cout << "Amount Pages :" ;
        cin >> amountPages ;
        cout << endl;
    }
};
class type: public publication{
    float time;
public:
    void setTime(float t){
        time = t;
    }
    void getData(){
          publication::getData();
        cout << "Time = " << time << endl;
    }
    void setData(){
          publication::setData();
        cout << "Time: ";
        cin >> time;
        cout << endl;

    }
    float getTime(){
        return time;
    }
};

int main(int argc, char *argv[])
{


    publication p;
    book        b;
    type        t;

    p.setData();
    b.setData();
    t.setData();

    p.getData();
    b.getData();
    t.getData();



    return 0;
}
