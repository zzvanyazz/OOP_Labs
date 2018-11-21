
#include <iostream>
#include <string.h>
using namespace std;

class Vector{
    int *a;
    int k;
public:
    Vector(){
        k = 0;
        a = NULL;
    }
    Vector(int mas[], int k){
        this->k = k;
        a = new int[k];
        for(int i = 0;i< k ;i++) a[i] = mas[i];


    }
    Vector operator+(int p){
        k +=1;
        int *a = new int[k];
        for (int i = 0 ; i < k-1;i++){
            a[i] = this->a[i];
        }
        a[k-1] = p;
        this-> a = a;
        return *this;
    }
    Vector operator-(int p){
        for(int i = 0; i < k ;i++) a[i] -= p;
        return *this;
    }
    Vector operator*(int p){
        for(int i = 0; i < k ;i++) a[i] *= p;
        return *this;
    }
    Vector operator/(int p){
        for(int i = 0; i < k ;i++) a[i] /= p;
        return *this;
    }
    int* operator=(const Vector &v){
        int *res = new int[k];
        for(int i = 0; i < k; i++){
            res[i] = a[i];
        }
        return res;
    }
    Vector(const Vector &v){
        a = new int[v.k];
        for(int i = 0; i < v.k; i++) a[i] = v.a[i];
        k = v.k;


    }

    Vector operator+(Vector &v){

        Vector res;

        int k1 = getK()+v.getK();
        int k2 = getK();

        res.setK(k1);

        int *a1 = getA();
        int *a2 = v.getA();

        for (int i = 0; i < k1;i++){
            if(i < k2){
            res[i] = a1[i];}
            else res[i] = a2[i-k2];
        }
        return res;
    }


    int getK(){return k;}
    int* getA(){return a;}
    void setK(int _k) {
        int *buf = new int[k];
        for(int i = 0; i < k;i++) buf[i] = a[i];
        a = new int[_k];
        for(int i = 0; i< k; i++) a[i] = buf[i];

        this->k = _k;
    }
    int& operator[] (int i){
        return a[i];
    }
    friend void operator <<(ostream &out, Vector &v){

        int k = v.getK();
        int *a = v.getA();

        for(int i = 0; i < k; i++)out << a[i] << "  ";
    }
   friend void operator>>(istream &in, Vector &v){
       cout << "number of elements : ";
       int k;
       in >> k;
       v.setK(k);
       int *a =v.getA();
       for(int i = 0; i < k; i++){
           in >> a[i];
       }
    }
};

int main(int argc, char *argv[])
{

    int mas[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 3, 4, 2, 2, 3, 3, 2, 1, 2, 3,4 };
    Vector *b = new Vector(mas, sizeof (mas)/sizeof (*mas));
    Vector c(mas, sizeof (mas)/sizeof (*mas));


    Vector *d = new Vector(*b+c);

    cout << *d;
    cout << *b;

    delete b;

    return 0;
}
