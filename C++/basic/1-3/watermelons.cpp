#include <iostream>

int main()
{
    using namespace std;

    int numOfwatermelons = 3;
    int bonus = 2;

    cout << "I had " << numOfwatermelons << " watermelons"<< endl;
    
    numOfwatermelons = numOfwatermelons + bonus;

    cout << "I have " << numOfwatermelons << " watermelons"<< endl;
    return 0;
}