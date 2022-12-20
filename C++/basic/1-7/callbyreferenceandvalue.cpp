#include <iostream>
using namespace std;

void printMessage(int a, int b);
void callByValue(int a, int b);
void callByReference(int &a, int &b);

int main()
{
    int a = 10;
    int b = 20;
    cout << "&a: " << &a << endl;
    cout << "&b: " << &b << endl;

    cout << "callByValue" << endl;
    printMessage(a, b);
    callByValue(a, b);
    printMessage(a, b);

    cout << "callByReference" << endl;
    printMessage(a, b);
    callByReference(a, b);
    printMessage(a, b);

    return 0; 
}

void printMessage(int a, int b)
{
    cout << "-----------" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "-----------" << endl;
}

void callByValue(int a, int b)
{
    cout << "lN callByValue" << endl;
    cout << "&a: " << &a << endl;
    cout << "&b: " << &b << endl;

    int tmp = a;
    a = b;
    b = tmp;
 }

 void callByReference(int &a, int &b)
 {
    cout << "lN callByReference" << endl;
    cout << "&a: " << &a << endl;
    cout << "&b: " << &b << endl;

    int temp = a;
    a = b;
    b = temp;
 }