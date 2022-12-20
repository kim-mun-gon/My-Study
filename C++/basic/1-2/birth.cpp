#include <iostream>

int main(void)
{
    using namespace std;
    
    int year, month, day;

    cout << "Year? " << endl;
    cin >> year;
    cout << "Month? " << endl;
    cin >> month;
    cout << "Day? " << endl;
    cin >> day;

    cout << "Your are born in " << year << ", " << month << ", " << day << endl;
    return 0;
}