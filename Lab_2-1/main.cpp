
#include <iostream>
#include <string.h>
using namespace std;
//Lab2 PR
class Toys {
    char *Owner;
    int Old;
public:
    Toys();
    Toys(char *, int);
    Toys(const Toys&);
    void SetOwner(char*);
    char* GetOwner();
    int Getchar();
    void Print();
    void Input();
    ~Toys();
};
Toys::Toys() {
    Toys::Owner = nullptr;
    Toys::Old = 0;
}
Toys::Toys(char *_Owner, int Old) {
    Toys::Owner = _Owner;
    Toys::Old = Old;


}
Toys::Toys(const Toys& T) {

    Toys::Owner = new char[40];
    for (int i = 0; i < 40; i++){
        Owner[i] = T.Owner[i];
    }
     Toys::Old = T.Old;
}
void Toys::SetOwner(char* Owner) {
    Toys::Owner = Owner;
}
char* Toys::GetOwner() {
    return Toys::Owner;
}
int Toys::Getchar() {
    return *Toys::Owner;
}
void Toys::Print() {
    cout << Toys::Owner << endl << Toys::Old << endl;
}
void Toys::Input() {

    char a[40];
    cin >> a;
    Owner = new char[40];
    for (int i = 0; i < 40; i++){
        Owner[i] = a[i];
    }
    cin >>  Toys::Old;
}
Toys::~Toys() {
    delete Owner;
}
int main()
{
    char str [] = {"name1"};
    Toys A, *B = new Toys(str, 6);

    A.Input();
    A.Print();
    B->Print();
    Toys C = A;
    Toys mas[] = { A, *B, C};
    for (int i = 0; i < 3; i++) {
        mas[i].Print();
    }
    C.Print();


    system("pause");

    return 0;
}
