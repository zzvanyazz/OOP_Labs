#include <iostream>

using namespace std;
template <typename T>
class Array{
    T *arr;
    int length;
public :
    Array(int _length){
        length = _length;
        Init();

    }
    void Init(){
        arr = new T[length];
        for(int i = 0; i < length; i++){
            cin >> arr[i];
        }
    }
    void Print(){
        for(int i = 0; i < length; i++){
            cout <<arr[i] << "   ";
        }
        cout << endl;
    }

    T getMax(){
        T max = arr[0];
        for(int i =1;i < length; i++){
            if(max < arr[i]) max = arr[i];

        }
        return max;

    }

    T getMiddle(){
        T sum = arr[0];

        for(int i = 1; i < length; i++){
            sum += arr[i];
        }
        return sum/length;

    }




};


int main()
{
    Array<int> a(12);
    Array<char> b(10);
    a.Print();
    cout << "middle = " << a.getMiddle() << endl;
    b.Print();
    cout << "middle = " << b.getMiddle() << endl;
    return 0;
}
