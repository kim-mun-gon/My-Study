#include <iostream>

int main()
{
    using namespace std;

    for(int i = 0; i < 11; i++)
    {
        for(int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}