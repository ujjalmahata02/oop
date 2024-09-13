#include<iostream>
#include<conio.h>
using namespace std;

class Time {
    int hour, minutes;
public:
    void get_time(int h, int m) {
        hour = h;
        minutes = m;
    }

    void display() {
        cout << hour << " hour(s) and " << minutes << " minute(s)" << endl;
    }

    void sum(Time, Time);
};

void Time::sum(Time t1, Time t2) {
    minutes = t1.minutes + t2.minutes;
    hour = minutes / 60;
    minutes = minutes % 60;
    hour = hour + t1.hour + t2.hour;
}

int main() {
    Time T1, T2, T3;
    T1.get_time(50, 50);
    T2.get_time(40, 40);
    T3.sum(T1, T2);
    T3.display();
    getch();
    return 0;
}
