#include <iostream>
#include <ctime>
using namespace std;

bool isLeapYear(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

int daysInMonth(int year, int month) {
    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else {
        return 31;
    }
}

int main() {
    int year, month;

    cout << "Enter year: ";
    cin >> year;
    cout << "Enter month (1-12): ";
    cin >> month;

    int days = daysInMonth(year, month);

    cout << "\n==============================\n";
    cout << "       " << year << "-" << (month < 10 ? "0" : "") << month << endl;
    cout << "==============================\n";
    cout << " Sun Mon Tue Wed Thu Fri Sat\n";

    tm time_in = {};
    time_in.tm_year = year - 1900;
    time_in.tm_mon = month - 1;
    time_in.tm_mday = 1;
    mktime(&time_in);
    int startingDay = time_in.tm_wday;

    for (int i = 0; i < startingDay; ++i) {
        cout << "    ";
    }

    for (int day = 1; day <= days; ++day) {
        cout << (day < 10 ? "  " : " ") << day << " ";
        if ((day + startingDay) % 7 == 0 || day == days) {
            cout << endl;
        }
    }

    cout << endl;
    return 0;
}
