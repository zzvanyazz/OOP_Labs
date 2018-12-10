#include <iostream>

using namespace std;


template <typename T>
T getMax(T t[], int length){
    T max = t[0];
    for(int i =1;i < length; i++){
        if(max < t[i]) max = t[i];

    }
    return max;

}

int main()
{
    int mas1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    double mas2[] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
    char mas3[] = {'q', 't', 'd', 'h', 'i', 'x', 'u', 'd', 'p', 'q', '0', '0', '0'};


   cout << "middle mas1 = " << getMax(mas1, sizeof(mas1)/sizeof(*mas1)) << endl;
    cout << "middle mas2 = " << getMax(mas2, sizeof(mas2)/sizeof(*mas2)) << endl;
    cout << "middle mas3 = " << getMax(mas3, sizeof(mas3)/sizeof(*mas3)) << endl;

    return 0;
}
