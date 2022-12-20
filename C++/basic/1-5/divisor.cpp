#include <iostream>

int main()
{
    using namespace std;

    int num;

    cout << "Please enter num: " << endl;
    cin >> num;

    for(int i = 1; i <= num; i++)
    {
        if(num % i == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}