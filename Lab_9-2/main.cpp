#include <iostream>
using namespace std;
#include <process.h>


const int LIMIT = 100;

class ARROVER {
    int n ;
public:
    ARROVER(int n ){
        cout <<endl <<  "n > " << LIMIT << endl;
    }
};




class safearay    {
private:
    int arr[LIMIT];
public:
    int& operator [](int n)
    {
        try{
            if( n< 0 || n>=LIMIT ) throw ARROVER(n);
            return arr[n];
        }catch(ARROVER e){
            cout << "Index out of bounds" << endl;
            exit(1);
        }

    }
};

int main()
{    safearay sa1;

     for(int j=0; j<LIMIT; j++)
         sa1[j] = j*10;           //*left* side of equal sign

      for(int j=0; j<LIMIT; j++)      //display elements
      {
          int temp = sa1[j];       //*right* side of equal sign
          cout << "Element " << j << " is " << temp << endl;
      }

       cout << sa1[123] << endl;
        cout << sa1[1] << endl;
         return 0;
}
