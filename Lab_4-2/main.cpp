#include <iostream>
using namespace std;


class sales{
    float mounth_sales[3];
public:
    void setData(){
        cout << "mounth sales: " << endl;
        for(int i = 0; i < 3; i++){
            cout << i+1 << "  ";
            cin  >> mounth_sales[i];
            cout << endl;
        }
    }
    void getData(){
        cout << "mounth sales :" << endl;
        for(int i = 0; i < 3; i++){
             cout << i+1 << "   " << mounth_sales[i] << endl;
        }
    }
};

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
class book:public publication, public sales {
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
        sales::getData();
        cout << "Amount Pages = " << amountPages << endl;

    }
    void setData(){
        publication::setData();
        sales::setData();
        cout << "Amount Pages :" ;
        cin >> amountPages ;
        cout << endl;
    }
};
class type:public publication, public sales{
    float time;
public:
    void setTime(float t){
        time = t;
    }
    void getData(){
        publication::getData();
        sales::getData();
        cout << "Time = " << time << endl;
    }
    void setData(){
        publication::setData();
        sales::setData();
        cout << "Time: ";
        cin >> time;
        cout << endl;

    }
    float getTime(){
        return time;
    }
};


int main()
{

    book b;
    b.setData();
    b.getData();
    type t;
    t.setData();
    t.getData();


    return 0;
}
