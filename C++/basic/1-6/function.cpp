#include <iostream>
using namespace std;

int sayHello(int number);

int main()
{
    using namespace std;

    cout << "main" << endl;
    cout << "result: " << sayHello(10) << endl;

    return 0;
}

int sayHello(int number)
{
    if(number < 1)
    {
        return -1;
    }

    for (int i = 0; i < number; i++)
    {
         cout << "Welcome!" << endl;
    }

    return 0;
}