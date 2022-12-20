#include <iostream>

int main()
{
    using namespace std;
    int year;
    int month;
    int day;

    cout << "When year?: " << endl;
    cin >> year;

    cout << "When month?: " << endl;
    cin >> month;

    cout << "When day?: " << endl;
    cin >> day;

    cout << "You are born in " << year << ", " << month << ", " << day << endl;

    int thisYear = 2021;
    int isAdult = (thisYear - year) >= 20;
    cout << "adult(1) non adult(0): " << isAdult << endl;
    return 0;
}