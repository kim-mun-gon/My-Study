#include <iostream>

int main()
{
    using namespace std;

    int floor = 4;
    int room = 8;

    for(int i = 1; i <= floor; i++)
    {
        for(int j = 1; j <= room; j++)
        {
            cout << "Floor: " << i * 100 + j << endl;
        }
        cout << endl;
    }
    return 0;
}