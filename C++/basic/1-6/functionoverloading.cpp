#include <iostream>

using namespace std;

int addTwo(int a, int b);
int addThree(int a, int b, int c);

int main()
{
    cout << addTwo(1, 2) << endl;
    cout << addThree(1, 2, 3) << endl;
    return 0;
}

int addTwo(int a, int b)
{
    cout << "addTwo" << endl;
    return a+b;
}

int addThree(int a, int b, int c)
{
    cout << "addTree" << endl;
    return a + b + c;
}