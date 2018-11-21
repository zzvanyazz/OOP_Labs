
#include <iostream>
#include <string>
using namespace std;


class publication{
    string name;
    int price;
public:
    string getName(){return name;}
    int getPrice(){return price;}
    void setName(string n){name = n;}
    void setPrice(int p){price = p;}
    virtual void getData(){
        cout << "Name = "+name+"    price = " << price  << endl;
    }
    virtual void setData(){
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
    void getData() override{
          publication::getData();
        cout << "Amount Pages = " << amountPages << endl;

    }
    void setData() override{
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
    void getData() override{
          publication::getData();
        cout << "Time = " << time << endl;
    }
     void setData() override{
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


    publication* a[] = {new book, new book, new type};
    for(int i = 0; i < 3; i++){
        a[i]->setData();
    }
    for(int i = 0; i < 3; i++){
        a[i]->getData();
    }












    return 0;
}
