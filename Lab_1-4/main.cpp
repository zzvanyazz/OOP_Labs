#include <QCoreApplication>
#include <iostream>
#include <string.h>
using namespace std;


class A{
private:
    int first;
    int second;
public :
    void Init(int f, int s){
        first = f;
        second = s;

    }
    void Display(){
        cout << first << "," << second << endl;
    }
    void Read(){
        string a;

        cin >> a;
        QString f = "", s = "";
        bool control = false;
        for(char i:a){
            if (i == ','){
                control = true;
                continue;
            }
            if (!control)
                f+=i;
            else s+= i;

        }

        first = atoi(f.toStdString());

    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
