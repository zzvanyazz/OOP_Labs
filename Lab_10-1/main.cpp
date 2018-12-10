#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream myfile;
      myfile.open ("myfile.txt");
      myfile << "Ivan Beker 17 +380982163279 TC_TNTU";
      myfile.close();

    return 0;
}
