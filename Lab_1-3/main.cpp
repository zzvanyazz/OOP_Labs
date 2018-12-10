#include <iostream>

using namespace std;

class time{
public :
    int hour;
    int minute;
    int second = 0;

    time(){

        hour   = 0;
        minute = 0;
        second = 0;
    }
    time(int _hour, int _minute, int _second):time(){

        second += _second;
        if(second >= 60){
            minute += second/60;
            second = second%60;

        };
        minute += _minute;
        if(minute >= 60){
            hour +=minute/60;
            minute = minute%60;
        };
        hour   += _hour  ;
    }

    void Display(){
        cout << hour << ":" << minute << ":" << second << endl;
    }
    void Sum(time t){

        second += t.second;
        if(second >= 60){second -=60; minute++;};
        minute += t.minute;
        if(minute >= 60){minute -=60; hour++;};
        hour += t.hour;
    }

};

int main()
{


    time t1(3, 40, 60), t2(2, 20, 5);
    t1.Display();
    t2.Display();
    time t3;
    t3.Sum(t1);
    t3.Sum(t2);
    t3.Display();
    return 0;
}














